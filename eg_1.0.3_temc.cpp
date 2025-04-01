#include <iostream>

int main (){
    int scale1;
    int scale2;
    std::cout << "Enter the option number according to the scale of the temperature: "<< '\n' ;
    std::cout << "1 for Celsius" << '\n' ;
    std::cout << "2 for Fahrenheit" << '\n' ;
    std::cout << "3 for Kelvin" << '\n' ;
    std::cin >> scale1 ;

    std::cout << "Enter the option number according to the scale of the temperature ((to be converted): "<< '\n' ;
    std::cout << "1 for Celsius" << '\n' ;
    std::cout << "2 for Fahrenheit" << '\n' ;
    std::cout << "3 for Kelvin" << '\n' ;
    std::cin >> scale2 ;
    
    double temp1;
    std::cout << "Enter the orignal temperature: " ;
    std::cin >> temp1 ;

    double temp2;

    switch (scale1)
    {
        case 1:
            switch (scale2)
            {
                case 1:
                    temp2 = temp1;
                    std::cout << "The temperature is: " << temp2 << " Celsius" << '\n';
                    break;
                case 2:
                    temp2 = (temp1 * 9/5) + 32;
                    std::cout << "The temperature is: " << temp2 << " Fahrenheit" << '\n';
                    break;
                case 3:
                    temp2 = temp1 + 273.15;
                    std::cout << "The temperature is: " << temp2 << " Kelvin" << '\n';
                    break;
                default:
                    std::cout << "Invalid scale" << '\n';
            }
            break;
        case 2:
            switch (scale2)
            {
                case 1:
                    temp2 = (temp1 - 32) * 5/9;
                    std::cout << "The temperature is: " << temp2 << " Celsius" << '\n';
                    break;
                case 2:
                    temp2 = temp1;
                    std::cout << "The temperature is: " << temp2 << " Fahrenheit" << '\n';
                    break;
                case 3:
                    temp2 = ((temp1 - 32) * 5/9) + 273.15;
                    std::cout << "The temperature is: " << temp2 << " Kelvin" << '\n';
                    break;
                default:
                    std::cout << "Invalid scale" << '\n';
            }
            break;
        case 3:
            switch (scale2)
            {
                case 1:
                    temp2 = temp1 - 273.15;
                    std::cout << "The temperature is: " << temp2 << " Celsius" << '\n';
                    break;
                case 2:
                    temp2 = ((temp1 - 273.15) * 9/5) + 32;
                    std::cout << "The temperature is: " << temp2 << " Fahrenheit" << '\n';
                    break;
                case 3:
                    temp2 = temp1;
                    std::cout << "The temperature is: " << temp2 << " Kelvin" << '\n';
                    break;
                default:
                    std::cout << "Invalid scale" << '\n';
            }
            break; 
        default:
            std::cout << "Invalid scale" << '\n';
    }

}