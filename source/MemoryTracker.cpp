//------------------------------------------------------------------------------
// MemoryTracker.cpp : class definition
//      - displays instance memory allocation and deallocation
//      - class data is a single pointer to int
//      - constructor allocates requested bytes,
//      - destructor releases allocated memory
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
// constructor
//------------------------------------------------------------------------------
MemoryTracker::MemoryTracker(size_t _bytelen) {
    
    // allocate memory block to track
    pTrackAddress = new size_t[_bytelen];

    cout << "Normal constructor allocating " << _bytelen
        << " ints at " << pTrackAddress << '\n';

    memset(pTrackAddress, '=', _bytelen * sizeof(int));
    *pTrackAddress = _bytelen;
}

//------------------------------------------------------------------------------
// copy constructor
//      - called on assignment operation: m2 = m1 where m2 does not yet exist
//      - m1 is the existing instance
//      - "this" is m2, the new instance
//------------------------------------------------------------------------------
MemoryTracker::MemoryTracker(const MemoryTracker& m1) {
    // get block length to allocate
    size_t len = *(m1.pTrackAddress);

    cout << "Copy constructor allocating " << len << " ints at ";

    // allocate memory for m2
    pTrackAddress = new size_t[len];

    // copy block length and data from this instance
    memcpy(pTrackAddress, m1.pTrackAddress, len * sizeof(size_t));

    // display the address of allocated memory
    cout << pTrackAddress << '\n';
}

//------------------------------------------------------------------------------
// destructor
//------------------------------------------------------------------------------
MemoryTracker::~MemoryTracker(void) {
    cout << "Freeing memory at " << pTrackAddress << '\n';
    delete[] pTrackAddress;
}

//------------------------------------------------------------------------------
// getter for debug access
//------------------------------------------------------------------------------
int MemoryTracker::getLength() {
    return *pTrackAddress;
}

//------------------------------------------------------------------------------
// overload assignment operator =
//      called on m1 = m2 assignment where m1 already exists
//------------------------------------------------------------------------------
MemoryTracker& MemoryTracker::operator=(const MemoryTracker& m2) {
    if (this != &m2) {
        delete[] pTrackAddress;

        pTrackAddress = m2.pTrackAddress;
    }
    return *this;
}
