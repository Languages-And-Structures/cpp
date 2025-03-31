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