from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'meu_pacote_launch'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        # Registra o pacote para o ROS2
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # Copia todos os arquivos .launch.py da pasta launch
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='felipe',
    maintainer_email='felipescamillo2020@gmail.com',
    description='Pacote para executar nós de launch integrados (map_server, static tf, navigation2, gazebo)',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [],
    },
)

