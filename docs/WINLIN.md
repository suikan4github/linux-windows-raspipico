# Building for the bare metal target

In this file, we explain how to build your code for the bare metal target. 
In this case, the word bare metal means the Raspberry Pi Pico or Pico2. 

We see two ways to build 
- CLI ( Command Line Interface )
- VS Code ( Visual Studio Code )

## Configuration and building on CLI

```sh
cmake -B build -S . \
-DCMAKE_C_COMPILER=gcc \
-DCMAKE_CXX_COMPILER=g++
cmake --build build --target all
```




## Configuration and building on VS Code

## How to run the application

## How to run the test