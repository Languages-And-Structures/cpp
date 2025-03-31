#include <iostream>
#include <cmath>

int main(){
    double x ;
    double y ;
    double z ;

    std::cout << "Enter side one of triangle: " ;
    std::cin >> x ;
    std::cout << "Enter side two of triangle: " ;
    std::cin >> y ;
    std::cout << "The hypotenuse is: " << sqrt(x*x + y*y) << std::endl ;
    
    return 0 ;  

}

