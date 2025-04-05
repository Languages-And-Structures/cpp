#include <iostream>

int main (){
    //  null pointer = a pointer that does not point to any object or function
    //  dangling pointer = a pointer that points to a memory location that has been freed or deleted
    //  wild pointer = a pointer that has not been initialized to point to a valid memory location  
    //  smart pointer = a pointer that automatically manages the memory of the object it points to  
    //  unique pointer = a smart pointer that owns a single object and cannot be shared with other pointers
    //  shared pointer = a smart pointer that can be shared with other pointers and keeps track of the number of references to the object it points to
    //  weak pointer = a smart pointer that does not affect the reference count of the object it points to  
    //  auto pointer = a smart pointer that automatically deletes the object it points to when it goes out of scope
    //  reference pointer = a pointer that refers to an object or function and does not own it
    //  function pointer = a pointer that points to a function and can be used to call the function
    //  array pointer = a pointer that points to an array and can be used to access the elements of the array
    //  pointer to pointer = a pointer that points to another pointer and can be used to access the value of the pointer it points to
    //  pointer to function = a pointer that points to a function and can be used to call the function
    //  pointer to array = a pointer that points to an array and can be used to access the elements of the array
    //  pointer to structure = a pointer that points to a structure and can be used to access the members of the structure


    int * ptr = nullptr; // null pointer
    
    int x = 10; 
    int * ptr1 = &x; // pointer to x

    if(ptr1 != nullptr) // check if ptr1 is not null
    {
        std::cout << "address assigned succesfully " << '\n'; // 
    }
    else
    {
        std::cout << "address not assigned" << '\n'; // out of memory
    }


    std::cout << std::endl;
    std::cout << "address of x: " << &x << '\n'; // address of x
    std::cout << std::endl;
    std::cout << "address of x: " << ptr1 << '\n'; // address of ptr1
    std::cout << std::endl;
    std::cout << "address of ptr1: " << &ptr1 << '\n'; // address of ptr1
    std::cout << std::endl;
    std::cout << "value of x: " << *ptr1 << '\n'; // value of x
    std::cout << std::endl;
    std::cout << "value of x: " << x << '\n'; // value of ptr1
    std::cout << std::endl;
    std::cout << "value pointed by ptr1: " << *ptr1 << '\n'; // value of ptr1
    std::cout << std::endl;
    
    return 0; // return 0 to indicate success
}