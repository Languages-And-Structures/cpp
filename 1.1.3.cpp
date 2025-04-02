#include <iostream>
#include <string> // Required for std::string

int main()
{
    std::string name1;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name1);

    std::string name = name1; // Copying the input to another string variable

    // 1. Checking string length
    if (name.size() >= 6)
    {
        std::cout << "Hello, the size of your name " << name << " is : " << name.size() << std::endl;
    }
    else
    {
        std::cout << "Btw, your name is too short." << std::endl;
    }

    // 2. Checking if the string is empty
    if (name.empty())
    {
        std::cout << "Your name is empty." << std::endl;
    }
    else
    {
        std::cout << "Your name is not empty." << std::endl;
    }

    // 3. Appending string
    name1.append("@karter.ac.in");
    std::cout << "We have assigned you a new email ID: " << name1 << " ." << std::endl;

    // 4. Clearing the string (Uncomment if needed)
    // name.clear();
    // std::cout << "Your name is cleared, see! Nothing printed before now." << std::endl;

    // 5. Accessing character at a given index
    int index;
    std::cout << "Enter the index of the character you want to see: ";
    std::cin >> index;

    if (index >= 0 && index < name.size())
    {
        std::cout << "The character at index " << index << " is: " << name.at(index) << std::endl;
    }
    else
    {
        std::cout << "Invalid index." << std::endl;
    }

    // Fix for input buffer issue (Clearing newline character)
    std::cin.ignore();

    // 6. Inserting a string at a given index
    std::string str;
    std::cout << "Enter a string to insert: ";
    std::getline(std::cin, str);

    int insertIndex;
    std::cout << "Enter the index at which you want to insert the string: ";
    std::cin >> insertIndex;

    if (insertIndex >= 0 && insertIndex <= name.size())
    {
        name.insert(insertIndex, str);
        std::cout << "The string after insertion is: " << name << std::endl;
    }
    else
    {
        std::cout << "Invalid index." << std::endl;
    }

    // 7 . finding the first occurrence of a character
    char ch;
    std::cout << "Enter the character you want to find: ";
    std::cin >> ch;
    // std :: cout << name.find(ch)<< std::endl;
    std::cout << "The first occurrence of the character " << ch << " is at index: " << name.find(ch) << std::endl;
    
    // 8. Finding the last occurrence of a character
    std::cout << "The last occurrence of the character " << ch << " is at index: " << name.rfind(ch) << std::endl;

    // 9. Finding the occurrence of a string
    std::string str2;
    std::cout << "Enter the string you want to find: ";
    std::cin.ignore(); // Clear the newline character from the input buffer
    std::getline(std::cin, str2);
    std::cout << "The occurrence of the string " << str2 << " is at index: " << name.find(str2) << std::endl;

    std::cout << "The last occurrence of the string " << str2 << " is at index: " << name.rfind(str2) << std::endl;

    // 10. Replacing a string
    std::string str3;
    std::cin.ignore();
    std::cout << "Enter the string you want to replace: ";    
    std::getline(std::cin, str3);
    
    std::cin.ignore();
    std::string str4;
    std::cout << "Enter the string you want to replace with: ";
    std::getline(std::cin, str4);   

    name.replace(name.find(str3), str3.size(), str4);
    std::cout << "The string after replacement is: " << name << std::endl;

    // 11. Erasing a string
    std::string str5;
    std::cin.ignore();
    std::cout << "Enter the string you want to erase: ";
    std::getline(std::cin, str5);
    name.erase(name.find(str5), str5.size());
    std::cout << "The string after erasing is: " << name << std::endl;


    // 12. Comparing strings    
    std::string str6;
    std::cin.ignore();
    std::cout << "Enter the string you want to compare: ";
    std::getline(std::cin, str6);
    if (name == str6)
    {
        std::cout << "The strings are equal." << std::endl;
    }
    else
    {
        std::cout << "The strings are not equal." << std::endl;
    }

    //When using std::cin >> to read an integer or a single word, 
    //a leftover newline character (\n) remains in the input buffer.
    //If std::getline() is called afterward, it reads this leftover 
    //newline instead of waiting for new input


    return 0;
}
