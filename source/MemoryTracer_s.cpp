//------------------------------------------------------------------------------
// MemoryTracker_s.cpp : 
//      - static member variables
//      - friend operator overload functions
// 
// Author: https://www.tutorialspoint.com/cplusplus/cpp_copy_constructor.htm
// Modified by: Prof. Linda C
//------------------------------------------------------------------------------
#include "MemoryTracker.h"

#include <iostream>

//------------------------------------------------------------------------------
// overload stream insertion operator <<
//------------------------------------------------------------------------------
ostream& operator<<(ostream& os, MemoryTracker& mt) {
    os << "Block Size " << *(mt.pTrackAddress)
        << " at " << mt.pTrackAddress << '\n';
    return os;
}
