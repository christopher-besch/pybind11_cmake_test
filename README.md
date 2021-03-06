## Resources

- [pybind11 docs](https://pybind11.readthedocs.io/en/stable/compiling.html#building-with-cmake)
- [smrfeld/cmake_cpp_pybind11_tutorial](https://github.com/smrfeld/cmake_cpp_pybind11_tutorial)
- [Real Python](https://realpython.com/python-bindings-overview/#pybind11)

## Compilation

```
git clone https://github.com/christopher-besch/pybind11_cmake_test --recurse
cd pybind11_cmake_test
mkdir build && cd build
# '-DCMAKE_EXPORT_COMPILE_COMMANDS=ON' is optional and only used by certein IDEs for static analysis
cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
# '-j4' uses 4 threads; can be set to anything
cmake --build . -j4
```

## Use

```
# to be run from build directory
python
>>> import my_math.my_math as math
>>> math.add(2, 7)
9
```
