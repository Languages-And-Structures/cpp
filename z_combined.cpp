#include <iostream>

int main(){

    std::cout << "hello there" << std::endl;
    // std::endl flush the output buffer
    
    std::cout << "whats going on" << '\n';
    // better performance wise 

    std::cout << "anything new" << '\n';

    
}

#include <iostream>

int main(){
    //  varivbles and data types 

    int x = 5;
    std :: cout << x << '\n';

    // integer
    int age = 12;
    int day = 7;
    int year = 2025;
    std :: cout << age << '\n';
    std :: cout << day << '\n';
    std :: cout << year << '\n';

    // double 
    double price = 10.99;
    double temperature = 25.234762;
    std :: cout << price << '\n';
    std :: cout << temperature << '\n';

    //float 
    float length = 12.3298616184659855789;
    std :: cout << length << '\n';

    // char 
    char grade = 'a';
    char choice = 'y';
    std :: cout << grade << '\n' ;
    std :: cout << choice << '\n' ;

    // boolean
    bool student = true;
    bool pwr = false;
    std :: cout << student  << '\n';
    std :: cout << pwr  << '\n';

    // string : represent sequence of text 
    std::string name = "dev";
    std :: cout << name << '\n';
    


}

#include <iostream>

namespace first {
    int x = 1;    
}

namespace second {
    int x = 2;    
}


int main(){
    const double PI = 3.14;
    const int SPL = 299792458;

    // CONST make converts to read only 

    // namespace
    std :: cout << first::x;
    std :: cout << second::x;

    // can also use using namespace name
    // or
    // {
        
    // } // namespace name

    
    
     
    

}

#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>>pairlist_t
typedef std::string str;

// using new_datatype = existing_datatype ;

int main(){
    // typdef
    str a = "Hello";
    std::cout << a << '\n' ;
}

#include <iostream>

int main(){
    // arithmetic operator

    int stu = 20 ;
    std::cout<<stu<<'\n';
    stu += 2 ;
    std::cout<<stu<<'\n';
    stu++ ;
    std::cout<<stu<<'\n';

}

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

#include <iostream>

int main(){
    // insertion operator <<
    // extraction operator >>
    // cout
    // cin
    
    std::string name;
    std::cout<<"Pls enter your name :";
    std::cin>>name;
    std::cout<<"Hello "<< name;

    // std::getline(std::cin , name);   used when we want to enter name with spaces
    // but if we use this after some input then there is a \n remaining in the buffer in so there might be some errors
    // we can use std::getline(std::cin >> std::ws, name);
    // the std ws will remove any whitespace or new line remaining in the buffer 
    
}

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

#include <iostream>

int main()
{

    int age;
    int speed;

    std ::cout << "Enter your age: " ;
    std ::cin >> age;

    std ::cout << "Enter your speed: " ;
    std ::cin >> speed;
    
    if (age < 18)
    {
        std ::cout << "You are a minor" << '\n';
    }
    else if (age >= 18 && age < 60 && speed > 60)
    {

        std ::cout << "We know that you are an adult, but slow down as death is also driving along" << '\n';
    }
    else if (age >= 18 && age < 60 && speed < 60)
    {
        std :: cout << "keep going buddy" << '\n' ;
    }
    else
    {
        std ::cout << "You are pretty old" << '\n';
    }
    return 0;
}

#include <iostream>

int main()
{
    int month;
    std ::cout << "Enter the month number: ";
    std ::cin >> month;

    switch (month)
    {
    case 1:
        std ::cout << "January" << '\n';
        break;
    case 2:
        std ::cout << "February" << '\n';
        break;
    case 3:
        std ::cout << "March" << '\n';
        break;
    case 4:
        std ::cout << "April" << '\n';
        break;
    case 5:
        std ::cout << "May" << '\n';
        break;
    case 6:
        std ::cout << "June" << '\n';
        break;
    case 7:
        std ::cout << "July" << '\n';
        break;
    case 8:
        std ::cout << "August" << '\n';
        break;
    case 9:
        std ::cout << "September" << '\n';
        break;
    case 10:
        std ::cout << "October" << '\n';
        break;
    case 11:
        std ::cout << "November" << '\n';
        break;
    case 12:
        std ::cout << "December" << '\n';
        break;
    default:
        std ::cout << "Invalid month number" << '\n';
    }
    return 0;
}


#include <iostream>

int main(){
    int grade ;
    std ::cout << "Enter your grade: " ;
    std ::cin >> grade;         

    grade >=90 ? std::cout << "Exelent job" : grade >=75 && grade < 90 ? std :: cout <<"well done keep improving" : grade >= 55 && grade <75 ? std :: cout <<"you need to work harder" : std :: cout << "start studying";
    return 0;
}

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