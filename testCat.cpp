#include "cat.cpp"
#include <iostream>

using namespace std;

int main()
{
    Cat schleep;

    schleep.setName("Schleep");
    schleep.setBreed("Creep");
    schleep.setAge(8);

    schleep.printInfo();
    return 0;
}