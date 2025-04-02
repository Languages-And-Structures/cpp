#include <iostream>

int main (){
    for (int i = 0 ; ;i++){
        if (i == 156){
            break;
        }
        if (i % 2 != 0){
            continue;
        }
        std:: cout << i +1 << '\n';

    }
}