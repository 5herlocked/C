#include <iostream>
#include <string>

using namespace std;

class RPS
{
    public:
        RPS();
        RPS(string player1);
        char compMove();
        char nextProMove(char userInput);
        string getPlayer1Name();
        char checkVictory(char player1Move, char compMove);

    private:
        string player1Name;
        char[3] choices;
        char compMove;
        char getNextMove(int options, char userInput); //option 1 = rand, option 2 = choose
}

RPS::RPS()
{
    player1Name = "Jane Doe";

    choices[0] = 'R';
    choices[1] = 'P';
    choices[2] = 'S';
}

RPS::RPS(string player1)
{
    player1Name = player1;

    choices[0] = 'R';
    choices[1] = 'P';
    choices[2] = 'S';
}

RPS::compMove()
{
    compMove = getNextMove(1);

    return compMove;
}

RPS::getNextMove(char userInput)
{
    compMove = getNextMove(2);

    return compMove;
}

RPS::getPlayer1Name(){ return player1Name; }

RPS::checkVictory(char player1Move, char compMove)
{
    switch (player1Move)
    {
        player1Move == compMove:
            return 't';
        
        player1Move == 'R':
            return ( compMove == 'P' ) ? 'c' : ( compMove == 'S' ) ? 'p' : 't';
        
        player1Move == 'S':
            return ( compMove == 'P' ) ? 'p' : ( compMove == 'R' ) ? 'c' : 't';

        player1Move == 'P':
            return ( compMove == 'S' ) ? 'c' : ( compMove == 'R' ) ? 'p' : 't';
    }
}
