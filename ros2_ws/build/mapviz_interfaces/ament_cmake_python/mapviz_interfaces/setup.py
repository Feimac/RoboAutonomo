from setuptools import find_packages
from setuptools import setup

setup(
    name='mapviz_interfaces',
    version='2.4.4',
    packages=find_packages(
        include=('mapviz_interfaces', 'mapviz_interfaces.*')),
)
