//------------------------------------------------------------------------------
// MemoryTracker.h : class declaration
//      - displays instance memory allocation and deallocation
//      - class data is a single pointer to int
//      - constructor allocates requested bytes,
//      - destructor releases allocated memory
// Author: https://www.tutorialspoint.com/cplusplus/cpp_copy_constructor.htm
// Modified by: Prof. Linda C
//------------------------------------------------------------------------------
#pragma once

#include <iostream>
using std::cout;
using std::ostream;

//------------------------------------------------------------------------------
// MemoryTracker
//------------------------------------------------------------------------------
class MemoryTracker {

    friend ostream& operator<<(ostream& os, MemoryTracker& mt);

private:
    int* pTrackAddress;

public:
    // constructor
    MemoryTracker(int len);

    // copy constructor
    // is for assignments to new LHS instance
    MemoryTracker(const MemoryTracker& mt);     

    // destructor
    ~MemoryTracker();

    // getter for debugging
    int getLength(void);

    // assignment operator overload
    // is for assignments to existing LHS instance
    MemoryTracker& operator=(const MemoryTracker& m2);
};
