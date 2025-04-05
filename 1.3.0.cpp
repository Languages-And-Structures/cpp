#include <iostream>

//pass by value
// The function swap takes two strings as parameters and swaps their values
void swap(std::string a, std::string b) {
    std::string temp = a; // Store the value of a in a temporary variable
    a = b;               // Assign the value of b to a
    b = temp;           // Assign the value of temp (original a) to b
}

// pass by reference
void swap1(std::string &a, std::string &b) {
    std::string temp = a; // Store the value of a in a temporary variable
    a = b;               // Assign the value of b to a
    b = temp;           // Assign the value of temp (original a) to b
}

int main(){

    std::string name = "John Doe";
    std::string name1 = "Mr Otter";
    
    std::cout << "name before swap: " <<std::endl;
    std::cout << "Name: " << name << '\n'; // Print the name
    std::cout << "Name1: " << name1 << '\n'; // Print the name1

    swap(name, name1); // Swap the values of name and name1 using the swap function
    
    std::cout << std::endl;
    
    std::cout << "name after pass by value swap: " <<std::endl;
    std::cout << "Name: " << name << '\n'; // Print the swapped name    
    std::cout << "Name1: " << name1 << '\n'; // Print the swapped name1

    swap1(name, name1); // Swap the values of name and name1 using the swap1 function

    std::cout << std::endl;
    
    std::cout << "name after pass by reference swap: " <<std::endl;
    std::cout << "Name: " << name << '\n'; // Print the swapped name
    std::cout << "Name1: " << name1 << '\n'; // Print the swapped name1
}