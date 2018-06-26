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
        bool rowCheck( int rowNum );

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
    move = true;

    board[0] = { "1" , "2" , "3" };
    board[1] = { "4" , "5" , "6" };
    board[2] = { "7" , "8" , "9" };

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

bool RPS::rowCheck ( int rowNum )
{
    for (int i = 0; i < 3; i++)
    {
        if (board[rowNum][i].compare(board[rowNum][0]) != 0)
            return false;
    }

    return true;
}

char RPS::endCriteria ()
{
    if (board[0][0].compare(board[0][1]) == 0  && board[0][1].compare(board[0][2]) == 0 && (board[0][2].compare("X") == 0 || board[0][2].compare("O") == 0))
        return board[0][0].compare("X") == 0 ? '1' : '2';

    if (board[1][0].compare(board[1][1]) == 0 && board[1][1].compare(board[1][2]) == 0 && (board[1][2].compare("X") == 0 || board[1][2].compare("O") == 0))
        return board[1][0].compare("X") == 0 ? '1' : '2';

    if (board[2][0].compare(board[2][1]) == 0 && board[2][1].compare(board[2][2]) == 0 && (board[2][2].compare("X") == 0 || board[2][2].compare("O") == 0))
        return board[2][0].compare("X") == 0 ? '1' : '2';

    if (board[0][0].compare(board[1][0]) == 0 && board[1][0].compare(board[2][0]) == 0 && (board[2][0].compare("X") == 0 || board[2][0].compare("O") == 0))
        return board[0][0].compare("X") == 0 ? '1' : '2';

    if (board[0][1].compare(board[1][1]) == 0 && board[1][1].compare(board[2][1]) == 0 && (board[2][1].compare("X") == 0 || board[2][1].compare("O") == 0))
        return board[0][1].compare("X") == 0 ? '1' : '2';

    if (board[0][2].compare(board[1][2]) == 0 && board[1][2].compare(board[2][2]) == 0 && (board[2][2].compare("X") == 0 || board[2][2].compare("O") == 0))
        return board[0][2].compare("X") == 0 ? '1' : '2';

    return 't';
}

bool RPS:: getMove ()
{
    return move;
}