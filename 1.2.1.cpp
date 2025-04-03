#include <iostream>

double pi = 3.14; // global variable

double area(int radius){

    return (pi * radius * radius); // function to calculate area of circle
}


int main (){

    int radius;// local variable
    
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    std::cout << "Area of the circle: " << area(radius) << std::endl; // function call to calculate area of circle
    std::cout << "Value of pi: " << pi << std::endl; // accessing global variable

}