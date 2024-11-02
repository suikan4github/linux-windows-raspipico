# Linux / Windows / Raspberry Pi Pico compatible application
This is a template project which can run on Linux, Windows and Raspberry Pi Pico. 
## Description

A set of CMake files template and sample C++ application which can run on Linux, Windows and Raspberry Pi Pico. 
This sample also allows unit test by GoogleTest. 

This template application is :
- Able to collaborate with [Visual Studio CODE](https://azure.microsoft.com/ja-jp/products/visual-studio-code/) editor.
- Build in [GoogleTest](https://github.com/google/googletest) which is downloaded automatically.
- "src" directory for application source code.
- "test" directory for unit tests. 
- Generate Gcov data files during test ( except Windows platform )
- Tested: 
    - Ubuntu 24.04 with gcc.
    - Ubuntu 24.04 with gcc-arm-none-eabi
- Automatically tested by GitHub Actions.
    - Ubuntu Latest with GCC.
    - Ubuntu Latest with Clang.
    - Windows Latest with MSVC 32bit.
    - Windows Latest with MSVC 64bit.
- Make coverage report and publish it to [Coveralls](https://coveralls.io/github/suikan4github/linux-windows-raspipico). 

## Tested environment / Target
### Ubuntu
- Kubuntu 24.10
- VS Code 1.94.2
- CMake 
- g++ 

### Windows
- Windows 11
- VS Code 1.94.2
- CMake 3.28.3
- Visual Studio Build Tools 2022 17.11.3

### WSL2
- Windows 11 / Ubuntu 24.04
- CMake 3.15 or newer
- g++ 13.2.0

### Raspberry Pi Pico
- Windows 11 / Ubuntu 24.04 (WSL)
- VS Code 1.94.2
- CMake 3.28.3
- gcc-arm-eabi-none 13.2.1

## Prerequisite  
 
On the Ubuntu, run followings on the shell to install the essential tools. 
```Shell
apt-get -y update
apt-get -y install build-essential cmake ninja-build git 
apt-get -y install gcc-arm-none-eabi libnewlib-arm-none-eabi
apt-get -y install doxygen graphviz
```

## Usage

- Refer [BAREMETAL.md](docs/BAREMETAL.md) for the Raspberry Pi Pico target. 
- Refer [LINUX.md](docs/LINUX.md) for the Linux target.
- Refer [WINDOWS.md](docs/WINDOWS.md) for the Windows target.

As of 2024/Nov, Windows target is unable to configure from VS Code. Our recommendation is WSL, instead of Windows native as a development environment. 

## License
This project is shared under the [MIT License](LICENSE). 