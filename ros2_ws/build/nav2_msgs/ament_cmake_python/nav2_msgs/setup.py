from setuptools import find_packages
from setuptools import setup

setup(
    name='nav2_msgs',
    version='1.3.1',
    packages=find_packages(
        include=('nav2_msgs', 'nav2_msgs.*')),
)
