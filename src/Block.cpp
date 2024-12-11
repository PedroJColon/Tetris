#include "Block.h"

Block::Block() : m_cellSize(30), m_rotationState(0), m_id(0)
{
}

void Block::Draw()
{
	std::array<Position, 4>& tiles = m_cells[m_rotationState];
	for (int i = 0; i < tiles.size(); i++)
	{
		DrawRectangle(tiles[i].coordinate[1] * m_cellSize + 1, tiles[i].coordinate[0] * m_cellSize + 1, 
			m_cellSize - 1, m_cellSize - 1, Colors::cellColors[m_id]);
	}
}
