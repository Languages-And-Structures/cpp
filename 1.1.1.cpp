#include <iostream>

int main(){
     
    char op;
    double num1;
    double num2;
    double result;
    std ::cout << "Enter operator (+, -, *, /): ";      
    std ::cin >> op;    
    std ::cout << "Enter first number: ";
    std ::cin >> num1;  
    std ::cout << "Enter second number: ";
    std ::cin >> num2;
    switch(op) {
        case '+':
            result = num1 + num2;
            std ::cout << num1 << " + " << num2 << " = " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std ::cout << num1 << " - " << num2 << " = " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std ::cout << num1 << " * " << num2 << " = " << result << '\n';
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                std ::cout << num1 << " / " << num2 << " = " << result << '\n';
            } else {
                std ::cout << "Error! Division by zero." << '\n';
            }
            break;
        default:
            std ::cout << "Error! Operator is not correct" << '\n';
    }
    return 0;
}
