#ifndef SIMPLE_NATIVE_LIB_LIBRARY_H
#define SIMPLE_NATIVE_LIB_LIBRARY_H

#ifdef WIN32
#define DllExport   __declspec( dllexport )
#else
#define DllExport __attribute__ ((dllexport))
#endif

extern "C" DllExport int hello(int x);

#endif //SIMPLE_NATIVE_LIB_LIBRARY_H
