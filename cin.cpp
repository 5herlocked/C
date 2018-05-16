#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string name;
    string phoneNumber;
    string address;

    string name2;
    string phoneNumber2;
    string address2;

    cout<<"Please enter your name User 1:\n";
    getline(std::cin, name);
    cout<<"Please enter your phone number "<< name <<":\n";
    getline(std::cin, phoneNumber);
    cout<<"Please enter your address "<< name <<":\n";
    getline(std::cin, address);

    cout << "Please enter your name User 2:\n";
    getline(std::cin, name2);
    cout << "Please enter your phone number " << name2 << ":\n";
    getline(std::cin, phoneNumber2);
    cout << "Please enter your address " << name2 << ":\n";
    getline(std::cin, address2);

    cout << name << '\n';
    cout << "\t\t" << address << '\n';
    cout << "\t\t" << phoneNumber << '\n';

    cout << name2 << '\n';
    cout << "\t\t" << address2 << '\n';
    cout << "\t\t" << phoneNumber2 << '\n';
}