#include <iostream>
#include <string>

using namespace std;

class RPS 
{
    private:
        char board[ 9 ];
        bool move;
        string player1;
        string player2;

    public:
        RPS();
        RPS( string player1, string player2 );
        char nextMove( int location );
        void createBoard();
        string getPlayer1();
        string getPlayer2();
};

RPS::RPS()
{
    move  = false;

    for (int i = 0; i < 9; i++)
    {
        board[i] = i + 1;
    }

    player1 = "John Doe";
    player2 = "Jane Doe";
    
    createBoard();
}

RPS::RPS ( string player1, string player2 )
{
    move = false;
    
    RPS::player1 = player1;
    RPS::player2 = player2;

    for (int i = 0; i < 9; i++)
    {
        board[i] = i + 1;
    }

    createBoard();
}

char RPS::nextMove( int location )
{
    board[ location - 1 ] = ( move ) ? 'X' : 'O';

    move = !move;

    createBoard();
}

void RPS::createBoard ()
{
    cout << board[0] << " | " << board[1] << " | " << board[2] << '\n' ;
    cout << board[3] << " | " << board[4] << " | " << board[5] << '\n' ;
    cout << board[6] << " | " << board[7] << " | " << board[8] << '\n' ;
}

string RPS::getPlayer1 ()
{
    return player1;
}

string RPS::getPlayer2 ()
{
    return player2;
}