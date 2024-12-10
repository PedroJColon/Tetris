#include "raylib.h"

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

    // PRIVATE FUNCTIONS HERE
    void Update();
    void Draw();
};

#endif // GAME_H