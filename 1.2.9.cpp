#include <iostream>

int main(){

    std::string name = "John Doe";
    int age = 30;
    bool working = true;

    std::cout << &name << '\n'; // Address of name
    std::cout << &age << '\n'; // Address of age    
    std::cout << &working << '\n'; // Address of working

}