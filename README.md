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

## Requirement
### Ubuntu
- Ubuntu 24.04
- VS Code
- CMake 3.15 or newer
- g++
- gcc-arm-eabi-none, libnewlib-arm-none-eabi 

### Windows
- Windows 10 or 11
- VS Code
- CMake 3.15 or newer
- Microsoft Visual C++ compiler 

### WSL2
- Windows 10 or 11
- CMake 3.15 or newer
- g++
- gcc-arm-eabi-none, libnewlib-arm-none-eabi 


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

## License
This project is shared with the [MIT License](LICENSE). 