#include "raylib.h"

#ifndef GAME_H
#define GAME_H

class Game
{
public:
	void Run();
private:
    // MEMBER VARIABLES HERE
    const int m_SCREENWIDTH = 300;
    const int m_SCREENHEIGHT = 600;

    // PRIVATE FUNCTIONS HERE
    void Update();
    void Draw();
};

#endif // GAME_H