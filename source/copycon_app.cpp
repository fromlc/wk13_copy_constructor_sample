//------------------------------------------------------------------------------
// wk13_copy_constructor_sample.cpp
// 
// Copy constructor demo
// 
// Author: https://www.tutorialspoint.com/cplusplus/cpp_copy_constructor.htm
// Modified by: Prof. Linda C
//------------------------------------------------------------------------------
#include "MemoryTracker.h"

#include <iostream>

//------------------------------------------------------------------------------
// using symbols
//------------------------------------------------------------------------------
using std::cout;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

    cout << "declare m1(10): ";
    MemoryTracker m1(10);       // This calls the normal constructor

    cout << "declare m2 = m1: ";
    MemoryTracker m2 = m1;      // This calls the copy constructor

    cout << "declare m3(30): ";
    MemoryTracker m3(30);       // This calls the normal constructor

    cout << "m3 = m1 invokes the assignment operator overload function: ";
    m3 = m1;

    cout << "display m1: ";
    cout << m1;
    cout << "display m2: ";
    cout << m2;
    cout << "why can't we display m3? ";
    cout << m3;

    cout << "at end of main(): m1, m2, and m3 going out of scope\n";

    return 0;
}
