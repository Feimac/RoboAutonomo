from setuptools import find_packages
from setuptools import setup

setup(
    name='vacuum_robot',
    version='0.0.0',
    packages=find_packages(
        include=('vacuum_robot', 'vacuum_robot.*')),
)
