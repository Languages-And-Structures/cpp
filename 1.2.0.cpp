#include <iostream>

// multiple functions can have sa,e name but different parameters changing their signsture
// this is called function overloading

void bake_cake();
void bake_cake(std::string type);
void bake_cake(std::string type, int layers);


void bake_cake(){
    std::cout << "Baking a cake!" << std::endl;
}

void bake_cake(std::string type){
    std::cout << "Baking a "<< type <<" cake!" << std::endl;
}

void bake_cake(std::string type, int layers){
    std::cout << "Baking a "<< layers <<" layers "<<type<<" cake!" << std::endl;
}

int main(){
    int choice;
    std::cout << "Enter your choice to select a cake function : " << std::endl;
    std::cout << "1. Bake a cake" << std::endl; 
    std::cout << "2. Bake a type of cake" << std::endl;
    std::cout << "3. Bake a type of cake with layers" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    std::string type;
    std::string type2;
    int layers;

    switch (choice)
    {
        case 1:
            bake_cake();
            break;

        case 2:
            std::cout << "Enter the type of cake: ";
            std::cin >> type;
            bake_cake(type);
            break;

        case 3:
            std::cout << "Enter the type of cake: ";
            std::cin >> type2;
            std::cout << "Enter the number of layers: ";
            std::cin >> layers;
            bake_cake(type2, layers);
            break;

        default:
            std::cout << "Invalid choice!" << std::endl;
    }
    return 0;
}

