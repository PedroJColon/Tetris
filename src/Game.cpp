#include "Game.h"
#include <time.h>

Game::Game() : m_SCREENWIDTH(300), m_SCREENHEIGHT(600), m_TITLE("Tetris - Raylib") { }

void Game::Run()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    InitWindow(m_SCREENWIDTH, m_SCREENHEIGHT, m_TITLE);
    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    m_grid.Print();
    srand(time(NULL));
    RefillPieces();
    currentBlock = GetRandomPiece();

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
    float deltaTime = GetFrameTime();
    Input(deltaTime);
}

void Game::Draw()
{
    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

    ClearBackground(Colors::blue);

    m_grid.Draw();
    currentBlock.Draw();

    EndDrawing();
    //----------------------------------------------------------------------------------
}

void Game::DrawPieces()
{
    for (size_t i = 0; i < m_pieces.size(); i++)
    {
        m_pieces[i].Draw();
    }
}

void Game::Input(float deltaTime)
{
    if (IsKeyPressed(KEY_LEFT))
    {
        currentBlock.Move(0, -100 * deltaTime);
        if (IsBlockOutside())
        {
            currentBlock.Move(0, 100 * deltaTime);
        }
        
    }
    if (IsKeyPressed(KEY_RIGHT))
    {
        currentBlock.Move(0, 100 * deltaTime);
        if (IsBlockOutside())
        {
            currentBlock.Move(0, -100 * deltaTime);
        }
    }
    if (IsKeyPressed(KEY_UP))
    {
        // Rotate Block
    }
    if (IsKeyPressed(KEY_DOWN))
    {
        currentBlock.Move(100 * deltaTime, 0);
        if (IsBlockOutside())
        {
            currentBlock.Move(-100 * deltaTime, 0);
        }

    }
}

Block Game::GetRandomPiece()
{
    int sizeModifer = m_pieces.size();
    for (size_t i = 0; i < m_pieces.size(); i++)
    {
        if (m_pieces[i].m_activeBlock)
        {
            --sizeModifer;
        }
        if (sizeModifer <= 0)
        {
            sizeModifer = m_pieces.size();
        }
    }
    int randomIndex = rand() % m_pieces.size();
    Block randBlock = m_pieces[randomIndex];
    m_pieces[randomIndex] = m_pieces[randomIndex];
    m_pieces[randomIndex].m_activeBlock = true;
    
    return randBlock;
}

bool Game::IsBlockOutside()
{
    for (size_t i = 0; i < currentBlock.GetCellPositions().size(); i++)
    {
        if (m_grid.IsCellOutside(currentBlock.GetCellPositions().at(i).coordinate[0], currentBlock.GetCellPositions().at(i).coordinate[1]))
        {
            return true;
        }
    }
    return false;
}

const void Game::RefillPieces()
{
    m_pieces = {
     Tetromino::LTetromino(), Tetromino::ITetromino(), Tetromino::JTetromino(), Tetromino::OTetromino(),
         Tetromino::STetromino(), Tetromino::TTetromino(), Tetromino::ZTetromino()
    };
}

