#include "Tetrominos.h"

Tetromino::LTetromino::LTetromino()
{
	m_id = 2;
	m_cells[0] = { Position {0,2}, Position {1,0}, Position {1,1}, Position {1,2} };
	m_cells[1] = { Position {0,1}, Position {1,1}, Position {2,1}, Position {2,2} };
	m_cells[2] = { Position {2,0}, Position {1,0}, Position {1,1}, Position {1,2} };
	m_cells[3] = { Position {0,0}, Position {0,1}, Position {1,1}, Position {2,1} };
	Move(0, 3);
}

Tetromino::ITetromino::ITetromino()
{
	m_id = 7;
	m_cells[0] = { Position {1,0}, Position {1,1}, Position {1,2}, Position {1,3} };
	m_cells[1] = { Position {0,2}, Position {1,2}, Position {2,2}, Position {3,2} };
	m_cells[2] = { Position {2,0}, Position {2,1}, Position {2,2}, Position {2,3} };
	m_cells[3] = { Position {0,1}, Position {1,1}, Position {2,1}, Position {3,1} };
	Move(-1, 3);

}

Tetromino::OTetromino::OTetromino()
{
	m_id = 4;
	m_cells[0] = { Position {0,0}, Position {0,1}, Position {1,0}, Position {1,1} };
	m_cells[1] = { Position {0,0}, Position {0,1}, Position {1,0}, Position {1,1} };
	m_cells[2] = { Position {0,0}, Position {0,1}, Position {1,0}, Position {1,1} };
	m_cells[3] = { Position {0,0}, Position {0,1}, Position {1,0}, Position {1,1} };
	Move(0, 4);
}

Tetromino::JTetromino::JTetromino()
{
	m_id = 1;
	m_cells[0] = { Position {0,0}, Position {1,0}, Position {1,1}, Position {1,2} };
	m_cells[1] = { Position {0,1}, Position {0,2}, Position {1,1}, Position {2,1} };
	m_cells[2] = { Position {1,0}, Position {1,1}, Position {1,2}, Position {2,2} };
	m_cells[3] = { Position {0,1}, Position {1,1}, Position {2,0}, Position {2,1} };
	Move(0, 3);
}

Tetromino::STetromino::STetromino()
{
	m_id = 6;
	m_cells[0] = { Position {0,1}, Position {0,2}, Position {1,0}, Position {1,1} };
	m_cells[1] = { Position {0,1}, Position {1,1}, Position {1,2}, Position {2,2} };
	m_cells[2] = { Position {1,1}, Position {1,2}, Position {2,0}, Position {2,1} };
	m_cells[3] = { Position {0,0}, Position {1,0}, Position {1,1}, Position {2,1} };
	Move(0, 3);
}

Tetromino::ZTetromino::ZTetromino()
{
	m_id = 3;
	m_cells[0] = { Position {0,0}, Position {0,1}, Position {1,1}, Position {1,2} };
	m_cells[1] = { Position {0,2}, Position {1,1}, Position {1,2}, Position {2,1} };
	m_cells[2] = { Position {1,0}, Position {1,1}, Position {2,1}, Position {2,2} };
	m_cells[3] = { Position {0,1}, Position {1,0}, Position {1,1}, Position {2,0} };
	Move(0, 3);
}

Tetromino::TTetromino::TTetromino()
{
	m_id = 5;
	m_cells[0] = { Position {0,1}, Position {1,0}, Position {1,1}, Position {1,2} };
	m_cells[1] = { Position {0,1}, Position {1,1}, Position {1,2}, Position {2,1} };
	m_cells[2] = { Position {1,0}, Position {1,1}, Position {1,2}, Position {2,1} };
	m_cells[3] = { Position {0,1}, Position {1,0}, Position {1,1}, Position {2,1} };
	Move(0, 3);
}
