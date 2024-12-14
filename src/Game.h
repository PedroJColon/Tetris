#include "raylib.h"
#include "Grid.h"
#include "Tetrominos.h"
#include <vector>

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

    std::array<Block, 7> m_pieces;
    // Possible thought
    // Create two arrays for pieces. One that is active and another that is not.
    // Another way we can do this is by using bitmask flags to save on memory
    Block currentBlock;
    Grid m_grid;

    // PRIVATE FUNCTIONS HERE
    void Update();
    void Draw();
    void DrawPieces();
    void Input(float deltaTime);
    Block GetRandomPiece();
    bool IsBlockOutside();
    const void RefillPieces();
};

#endif // GAME_H