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
	// TODO/NOTE
	// Add variable to indicate block is currently not in use
	// Maybe can do bitwise operations to indicate if block is in use or not
	// Or create a seperate vector or array list to check if active or not
	bool m_activeBlock;

private:
	int m_rowOffset;
	int m_colOffset;
	int m_cellSize;
	int m_rotationState;
};

#endif // !BLOCK_H
