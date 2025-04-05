#include <iostream>

int main(){
    //fill() = fills the array with a value
    //fill_n() = fills the array with a value for n times       

    std::string food[100];

    fill(food, food + 100, "pizza"); // syntax for fill() = fill(start, end, value)

    for (std::string i : food){
        std::cout << i << '\n';
    }
    return 0;
}