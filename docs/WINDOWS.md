# Building for the Windows target

In this file, we explain how to build your code for the Linux target. 

We see one way to build 
- CLI ( Command Line Interface )


## Configuration and building on CLI

```sh
cmake -B build -S . -DCMAKE_C_COMPILER=cl -DCMAKE_CXX_COMPILER=cl -A x64 
cmake --build build --target all
```

## Configuration and building on VS Code

As of 2024/Nov, we cannot configure this project on the VS Code. 

Once configuration is done from CLI, we can build the project from GUI. 
Click the "Build" button in the status bar. 

![](../image/statusbar.png)


## How to run the application from CLI
From the command line, run the following command :
```sh
build\src\Debug\app.exe
```

## How to run the application from VS Code
From the VS Code, click the run (▷) button to run the program. 

![](../image/statusbar.png)


## How to run the test from CLI
From the command line, run the following command :
```sh
ctest --test-dir build
```
## How to run the test from VS Code
From the VS Code, click the Test extension, and then run. 

![](../image/test.png)
