#include "raylib.h"
#include "Colors.h"
#include "Position.h"
#include <map>

#ifndef BLOCK_H
#define BLOCK_H
class Block
{
public:
	Block();
	void Draw();
	int m_id;
	std::map<int, std::array<Position, 4>> m_cells;

private:
	int m_cellSize;
	int m_rotationState;
};

#endif // !BLOCK_H
