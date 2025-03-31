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