# glfw-opengl-cmake-starter

OpenGL starter project with GLFW using CMake.

Note: This project currently uses `glad` to generate OpenGL 4.1 Core. Edit `lib/CMakeLists.txt` if you want to change this.

## Index

* [Prerequisites](#prerequisites)
* [Cloning the repository](#cloning)
* [Generating the project](#generate-project)
  * [Ninja](#ninja)
* [Building](#building)

## Prerequisites

To use project template, you need to install the following:

- [Git](https://git-scm.com/downloads)
- [CMake](https://cmake.org/download/) (minimum version of 3.25.1)
- [Python](https://www.python.org/downloads/) (This is used for `glad` to generate the OpenGL loader)

You will also need the `Jinja2` Python package. You can install it using pip by running this command:

```bash
pip install jinja2
```

## Cloning the repository

In a terminal with Git installed, clone the repository by typing in the following command in a directory where you want your project:

```bash
$ git clone --recurse-submodules https://github.com/dante1130/glfw-opengl-cmake-starter
```

## Generating the project

CMake generates the project files for a subset of buildsystem that you may want to use.

I recommend using Ninja so I'll use that as an example.

See here for a list of all CMake generators: https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html

Alternatively, most modern IDEs like Visual Studio and CLion have CMake support, so you may use your IDE to generate instead.

### Ninja

To generate for the Ninja buildsystem, run the following command:

```bash
$ cmake -S . -B build -G "Ninja"
```

In the `build` directory, you will see that the files for the Ninja buildsystem has been generated.

## Building

```bash
$ cmake --build build
```

The compiled executable will now be in `build/bin`.

Alternatively, most modern IDEs like Visual Studio and CLion have CMake support, so you may use your IDE to build instead.

