#include <iostream>

int main(){
    // pointres
    // &# = address of operator
    // * = dereference operator

    std::string name = "John Doe";
   
    std::string *ptr = &name; // Pointer to the address of name
    std::cout << "Address of name: " << &name << '\n'; 

    std::string free_pizza[5] = {"pepperoni", "cheese", "veggie", "meat lovers", "hawaiian"}; // Array of strings   
    std::string *ptr1 = free_pizza; // Pointer to the first element of the array

    //name of an array is a pointer to the first element of the array
    std::cout << "Address of free_pizza: " << &free_pizza << '\n'; // Address of the array  
    std::cout << "Address of free_pizza: " << free_pizza << '\n'; // Address of the array  


}