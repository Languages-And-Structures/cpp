#include <iostream>

int main(){
    // type conversion

    int x = 3.14;
    // implicit type conversdion 
    std::cout<<x<<'\n';

    double y = 3.14;
    std::cout<<y<<'\n';
    double z = (int)3.14;
    std::cout<<z<<'\n';

    int a = 80;
    int b = 100;
    double c = (double)a/(double)b*100;
    std::cout<<c<<'\n';

}