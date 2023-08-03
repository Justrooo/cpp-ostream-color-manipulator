# C++ color manipulator
A helpful manipulator that changes color using ANSI codes

Example use:
```cpp
std::cout << color(blue) << "Hello World" << std::endl;
```
or
```cpp
std::cout << color(4) << "Hello World" << std::endl;
```
#
To go back to the default, white color use:
```cpp
std::cout << color(white) << "Hello World" << std::endl;
```
or
```cpp
std::cout << color(normal) << "Hello World" << std::endl;
```
