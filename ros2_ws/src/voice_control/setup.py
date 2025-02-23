from setuptools import setup

package_name = 'voice_control'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    author='Seu Nome',
    author_email='seu_email@exemplo.com',
    description='Pacote para comandos de voz e controle de movimento',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            # registre os nós Python
            'voice_command_node = voice_control.voice_command_node:main',
            'motion_control_node = voice_control.motion_control_node:main'
        ],
    },
)

