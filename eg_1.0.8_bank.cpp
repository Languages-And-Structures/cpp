#include <iostream>

// Function to handle banking transactions
void bank_register() {
    double balance = 0.0;
    double amount;
    int choice;

    std::cout << "\nWelcome to the Bank!" << std::endl;
    do {
        // Display menu
        std::cout << "1. Deposit" << std::endl;
        std::cout << "2. Withdraw" << std::endl;
        std::cout << "3. Check Balance" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Please enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter amount to deposit: ";
                std::cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    std::cout << "Deposited: " << amount << std::endl;
                } else {
                    std::cout << "Invalid amount!" << std::endl;
                }
                break;

            case 2:
                std::cout << "Enter amount to withdraw: ";
                std::cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    std::cout << "Withdrawn: " << amount << std::endl;
                } else if (amount > balance) {
                    std::cout << "Insufficient funds!" << std::endl;
                } else {
                    std::cout << "Invalid amount!" << std::endl;
                }
                break;

            case 3:
                std::cout << "Current balance: " << balance << std::endl;
                break;

            case 4:
                std::cout << "Exiting..." << std::endl;
                break;

            default:
                std::cout << "Invalid choice! Please enter a valid option." << std::endl;
        }

    } while (choice != 4);
}

int main() {
    bank_register();  // Call function to handle banking operations
    return 0;
}
