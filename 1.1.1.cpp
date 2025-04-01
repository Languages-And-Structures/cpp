#include <iostream>

int main(){
    int grade ;
    std ::cout << "Enter your grade: " ;
    std ::cin >> grade;         

    grade >=90 ? std::cout << "Exelent job" : grade >=75 && grade < 90 ? std :: cout <<"well done keep improving" : grade >= 55 && grade <75 ? std :: cout <<"you need to work harder" : std :: cout << "start studying";
    return 0;
}