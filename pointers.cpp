/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include <iostream>
#include <string>

int main()
{
    int givenInt;
    std::cout << "Enter an Integer: \n";
    std::cin >> givenInt;

    float givenFloat;
    std::cout << "Enter a Float: \n";
    std::cin >> givenFloat;
    
    double givenDouble;
    std::cout << "Enter a Double: \n";
    std::cin >> givenDouble;

    std::string givenString;
    std::cout << "Enter a String: \n";
    std::cin >> givenString;

    char givenChar;
    std::cout << "Enter a Character: \n";
    std::cin >> givenChar;

    int *pointerToInt = &givenInt;
    float *pointerToFloat = &givenFloat;
    double *pointerToDouble = &givenDouble;
    std::string *pointerToString = &givenString;
    char *pointerToChar = &givenChar;

    std::cout << "pointerToInt points to: " << pointerToInt << '\n';
    std::cout << "pointerToInt contains: " << *pointerToInt << '\n';
    std::cout << "pointerToFloat points to: " << pointerToFloat << '\n';
    std::cout << "pointerToFloat contains: " << *pointerToFloat << '\n';
    std::cout << "pointerToDouble points to: " << pointerToDouble << '\n';
    std::cout << "pointerToDouble contains: " << *pointerToDouble << '\n';
    std::cout << "pointerToString points to: " << pointerToString << '\n';
    std::cout << "pointerToString contains: " << *pointerToString << '\n';
    std::cout << "pointerTochar points to: " << pointerToChar << '\n';
    std::cout << "pointerToChar contains: " << *pointerToChar << '\n';

    return 0;
}
