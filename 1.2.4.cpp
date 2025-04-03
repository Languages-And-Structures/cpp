#include <iostream>

// for each loop is used to iterate over elements in a container (like an array or vector)
// without needing to use an index. It simplifies the syntax and makes the code cleaner 
// and easier to read.

int main(){
    int grades[5] = {90, 85, 78, 92, 88};

    for(int grade : grades){
        std::cout << "Grade: " << grade << '\n';
    }
    std::cout<<'\n';
}