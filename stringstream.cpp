#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
    double length;
    double width;
    string intermediate;

    cout << "What is the length of the room?\n";
    getline( cin, intermediate );
    stringstream(intermediate) >> length;

    cout << "What is the width of the room?\n";
    getline( cin, intermediate );
    stringstream(intermediate) >> width;
    
    cout << "Area of the room is: " << length * width << " unit squared." << '\n';

    return 0;
}