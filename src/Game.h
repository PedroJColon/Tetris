#include "raylib.h"
#include "Grid.h"
#include "Tetrominos.h"

#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game();
	void Run();
private:
    // MEMBER VARIABLES HERE
    const int m_SCREENWIDTH;
    const int m_SCREENHEIGHT;
    const char* m_TITLE;

    Grid m_grid;
    Tetromino::LTetromino lTetromino;
    Tetromino::ITetromino iTetromino;
    Tetromino::OTetromino oTetromino;
    Tetromino::JTetromino jTetromino;

    // PRIVATE FUNCTIONS HERE
    void Update();
    void Draw();
};

#endif // GAME_H