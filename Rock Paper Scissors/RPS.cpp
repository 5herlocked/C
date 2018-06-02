#include <iostream>
#include <string>

using namespace std;

class RPS 
{
    private:
        char board[3][3];
        bool move;
        string player1;
        string player2;
        int numberOfMoves;

    public:
        RPS();
        RPS( string player1, string player2 );
        char nextMove( int location );
        void createBoard();
        string getPlayer1();
        string getPlayer2();
        char endCriteria();
};

RPS::RPS()
{
    move  = false;

    int location = 0;

    for (int r = 0; r < 3; ++r)
    {
        for (int c = 0; c < 3; ++c)
        {
            board[r][c] = ++location;
        }
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

    int location = 0;

    for (int r = 0; r < 3; ++r)
    {
        for (int c = 0; c < 3; ++c)
        {
            board[r][c] = ++location;
        }
    }

    createBoard();
}

char RPS::nextMove( int location )
{
    board[ location/3 ][ location%3 ] = ( move ) ? 'X' : 'O';

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

char RPS::endCriteria ()
{
    char returnVal;

    if (numberOfMoves > 9)
        return 't';

    
}