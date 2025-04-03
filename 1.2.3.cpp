#include <iostream>

int main (){
    // sizeof() returns the number of elements in the array

    int a = 1946;
    char ch = 'A';
    float f = 3.14f;
    double d = 3.14159;
    std::string str = "Hello, World!";
    bool b = true;
    int arr[5] = {1, 2, 3, 4, 5};

    std::cout<<'\n';
    std::cout << "Size of int: " << sizeof(a) << " bytes\n";
    std::cout<<'\n';
    std::cout << "Size of char: " << sizeof(ch) << " bytes\n";
    std::cout<<'\n';
    std::cout << "Size of float: " << sizeof(f) << " bytes\n";
    std::cout<<'\n';
    std::cout << "Size of double: " << sizeof(d) << " bytes\n";
    std::cout<<'\n';
    std::cout << "Size of string: " << sizeof(str) << " bytes\n";
    std::cout<<'\n';
    std::cout << "Size of bool: " << sizeof(b) << " bytes\n";
    std::cout<<'\n';
    std::cout << "Size of array: " << sizeof(arr) << " bytes\n";
    std::cout<<'\n';
    std::cout << "Size of std::string : " << sizeof(std::string) << " bytes\n";
    std::cout<<'\n';
}