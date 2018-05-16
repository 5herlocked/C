#include <iostream>
#include <string>

int main ()
{
    std::string name;
    std::string phoneNumber;
    std::string address;

    std::string name2;
    std::string phoneNumber2;
    std::string address2;

    std::cout<<"Please enter your name User 1:\n";
    std::getline(std::cin, name);
    std::cout<<"Please enter your phone number "<< name <<":\n";
    std::getline(std::cin, phoneNumber);
    std::cout<<"Please enter your address "<< name <<":\n";
    std::getline(std::cin, address);

    std::cout << "Please enter your name User 2:\n";
    std::getline(std::cin, name2);
    std::cout << "Please enter your phone number " << name2 << ":\n";
    std::getline(std::cin, phoneNumber2);
    std::cout << "Please enter your address " << name2 << ":\n";
    std::getline(std::cin, address2);

    std::cout << name << '\n';
    std::cout << "\t\t" << address << '\n';
    std::cout << "\t\t" << phoneNumber << '\n';

    std::cout << name2 << '\n';
    std::cout << "\t\t" << address2 << '\n';
    std::cout << "\t\t" << phoneNumber2 << '\n';
}