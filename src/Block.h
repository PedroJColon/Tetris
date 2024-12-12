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
	void Move(int rowOffset, int colOffset);
	std::array<Position, 4> GetCellPositions();
	std::map<int, std::array<Position, 4>> m_cells;
	int m_id;

private:
	int m_rowOffset;
	int m_colOffset;
	int m_cellSize;
	int m_rotationState;
};

#endif // !BLOCK_H
