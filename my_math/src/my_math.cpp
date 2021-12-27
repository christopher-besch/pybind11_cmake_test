#include <pybind11/pybind11.h>

#include "my_math.h"

void init_my_math(pybind11::module& m)
{
    m.def("add", &add, "add function");
    m.def("sub", &sub, "add function");
}

PYBIND11_MODULE(my_math, m)
{
    m.doc() = "My math example library.";

    init_my_math(m);
}
