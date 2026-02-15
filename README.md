# wxWidget Implementation of ui-comparison

This project implements the [ui-comparison examples](https://github.com/ui-comparison/Toolkit-Comparison-Main) in C++ with [wxWidgets](https://wxwidgets.org).

# How to Build

## Windows 

Run the following commands

```sh
vcpkg install
cmake -S . -B ./out --preset x86-release
cmake --build ./out
```

If you are using the terminal in Visual Studio with C++ build tools installed, it should be pre-configured to know where all these tools are.

Alternatively you can use the IDEs build and run commands.

## Linux

Ensure that wxWidgets dev packages are installed. Under Ubuntu, this is `libwxgtk#-dev` (With \# being the latest version)

Then run:

```
cmake -S . -B ./out
cmake --build ./out
```
