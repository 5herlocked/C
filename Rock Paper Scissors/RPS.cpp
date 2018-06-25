#include <iostream>
#include <string>

using namespace std;

class RPS 
{
    private:
        string board[3][3];
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
        bool getMove();
};

RPS::RPS()
{
    move  = true;

    int location = 1;

    for (auto &rows : board)
    {
        for (auto &c : rows)
        {
            c = location++;
        }
    }

    player1 = "John Doe";
    player2 = "Jane Doe";
    
    createBoard();
}

RPS::RPS ( string player1, string player2 )
{
    move = true;
    
    RPS::player1 = player1;
    RPS::player2 = player2;

    int location = 1;

    for (auto& rows : board)
    {
        for (auto& c : rows)
        {
            c = location++;
        }
    }

    // for (int r = 0; r < 3; ++r)
    // {
    //     for (int c = 0; c < 3; ++c)
    //     {
    //         ++location;
    //         board[r][c] = location;
    //     }
    // }

    createBoard();
}

char RPS::nextMove( int location )
{
    board[ location/3 ][ location%3 ] = ( move ) ? 'X' : 'O';
    ++numberOfMoves;
    move = !move;
    createBoard();
}

void RPS::createBoard ()
{
    cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << '\n' ;
    cout << "---------" << '\n';
    cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << '\n' ;
    cout << "---------" << '\n';
    cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << '\n' ;
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
    if (numberOfMoves > 9)
        return 't';

    if (board[0][0] == board[0][1] && board[0][1] == board[0][2] && (board[0][2] == 'X'|| board[0][2] == 'O'))
        return board[0][0] == 'X' ? '1' : '2';

    if (board[1][0] == board[1][1] && board[1][1] == board[1][2] && (board[1][2] == 'X' || board[1][2] == 'O'))
        return board[1][0] == 'X' ? '1' : '2';

    if (board[2][0] == board[2][1] && board[2][1] == board[2][2] && (board[2][0] == 'X' || board[2][0] == 'O'))
        return board[2][0] == 'X' ? '1' : '2';

    return 't';
}

bool RPS:: getMove ()
{
    return move;
}