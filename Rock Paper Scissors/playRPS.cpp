#include "RPS.cpp"
#include <iostream>

int main ()
{
    
    cout << "This is 2 Player Rock Paper Scissors Game!" << '\n' ;

    cout << "Please enter Player 1's Name: " << '\n';
    string player1;
    getline(cin, player1);

    cout << "Please enter Player 2's Name: \n";
    string player2;
    getline(cin, player2);

    cout << "The board: \n";
    RPS game = RPS(player1 , player2);

    

    return 0;
}