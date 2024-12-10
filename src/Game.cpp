#include "Game.h"

Game::Game() : m_SCREENWIDTH(300), m_SCREENHEIGHT(600), m_TITLE("Tetris - Raylib") { }

void Game::Run()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    InitWindow(m_SCREENWIDTH, m_SCREENHEIGHT, m_TITLE);
    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        Update();
        Draw();
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
}

void Game::Update()
{
    // Update
    //----------------------------------------------------------------------------------
    // TODO: Update your variables here
    //----------------------------------------------------------------------------------

}

void Game::Draw()
{
    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

    ClearBackground(BLACK);

    for (int y = 0; y < m_SCREENHEIGHT; y++)
    {
        for (int x = 0; x < m_SCREENWIDTH; x++)
        {
            // TODO: Set define size of Cell
            DrawRectangle(x * 30 + 1, y * 30 + 1, 30 - 1, 30 - 1, DARKBLUE);
        }
    }


    EndDrawing();
    //----------------------------------------------------------------------------------
}
