#include "library.h"

#include <iostream>

extern "C" DllExport int hello(int x) {
    return x+3;
}
