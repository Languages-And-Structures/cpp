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