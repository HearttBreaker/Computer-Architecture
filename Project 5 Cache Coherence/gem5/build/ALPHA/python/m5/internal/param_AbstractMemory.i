%module(package="m5.internal") param_AbstractMemory

%{
#include "params/AbstractMemory.hh"
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include "base/range.hh"
#include <cstddef>
#include <cstddef>
#include <string>
#include <cstddef>
/**
  * This is a workaround for bug in swig. Prior to gcc 4.6.1 the STL
  * headers like vector, string, etc. used to automatically pull in
  * the cstddef header but starting with gcc 4.6.1 they no longer do.
  * This leads to swig generated a file that does not compile so we
  * explicitly include cstddef. Additionally, including version 2.0.4,
  * swig uses ptrdiff_t without the std:: namespace prefix which is
  * required with gcc 4.6.1. We explicitly provide access to it.
  */
#include <cstddef>
using std::ptrdiff_t;
%}

%import "stdint.i"
%import "base/types.hh"
%import "python/swig/range.i"
%include "std_string.i"

%import "python/m5/internal/param_MemObject.i"


// stop swig from creating/wrapping default ctor/dtor
%nodefault AbstractMemory;
class AbstractMemory
    : public MemObject
{
  public:
};

%include "params/AbstractMemory.hh"
