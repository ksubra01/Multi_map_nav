from setuptools import find_packages
from setuptools import setup

setup(
    name='multi_map_nav',
    version='0.1.0',
    packages=find_packages(
        include=('multi_map_nav', 'multi_map_nav.*')),
)
