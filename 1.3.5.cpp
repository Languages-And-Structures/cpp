#include <iostream>


int sum(int n ){
    if (n <= 0) // Base case: if n is 0, return 0
        return 0;
    return n+sum(n - 1); // Recursive call to sum with n-1
}

int main (){
    
    int a;
    std::cout <<"enter a number to get sum uptill then : ";
    std::cin >> a;  

    int x = sum(a);
    std::cout << "The sum of " << a << " natural is: " << x << '\n';

    // try  65144
    
    return  0 ;
}