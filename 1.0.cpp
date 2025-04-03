// The std::string object itself has a pre-allocated, fixed size that contains pointers and
//  metadata to manage the actual string data, which is stored in heap memory separately. 
//  The size of the std::string object does not change, no matter how long or short the 
//  string content is.

// What is Metadata in std::string?
// Metadata refers to additional information that std::string stores inside the object 
// itself to manage the actual text stored in the heap. Typically, std::string metadata 
// includes:

// 1.Pointer to Character Data:
//     A memory address pointing to where the actual string is stored in the heap.

// 2.Size (Length of the String):
//     An integer that keeps track of how many characters the string currently holds.

// 3.Capacity (Allocated Space):
//     An integer that tells how much memory is allocated for the string (it may be 
//     larger than the current string length to optimize performance).

#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hi";
    std::string str2 = "This is a long string!";
    
    std::cout << "Size of std::string object: " << sizeof(str1) << " bytes" << std::endl;
    
    return 0;
}

// Extra Detail: Small String Optimization (SSO)
// For very short strings (typically ≤15 characters on many systems), std::string may not 
// use the heap at all!
// Instead, it stores the small string directly inside the object to improve performance.
// So, "Hi" might actually be stored inside the object itself, while longer strings go into 
// the heap.

// Even if the string grows to 1000 characters, the std::string object size remains the same 
// because it only holds the pointer and metadata—the actual text grows in the heap.