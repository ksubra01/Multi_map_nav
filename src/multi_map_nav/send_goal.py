#!/usr/bin/env python3
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from multi_map_nav.action import MultiMapNavigation

class MultiMapNavClient(Node):
    def __init__(self):
        super().__init__('multi_map_nav_client')
        self._action_client = ActionClient(self, MultiMapNavigation, 'multi_map_nav')

    def send_goal(self, map_name, x, y):
        goal_msg = MultiMapNavigation.Goal()
        goal_msg.target_map = map_name
        goal_msg.target_pose = PoseStamped()
        goal_msg.target_pose.header.frame_id = "map"
        goal_msg.target_pose.pose.position.x = x
        goal_msg.target_pose.pose.position.y = y
        goal_msg.target_pose.pose.orientation.w = 1.0

        self._action_client.wait_for_server()
        self._send_goal_future = self._action_client.send_goal_async(goal_msg)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return
        self.get_logger().info('Goal accepted')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Result: {result.success}, {result.message}')
        rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    client = MultiMapNavClient()
    client.send_goal("room2", 3.0, 3.0)
    rclpy.spin(client)

if __name__ == '__main__':
    main()
