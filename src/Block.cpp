#include "Block.h"

Block::Block() : m_rowOffset(0), m_colOffset(0), m_cellSize(30), m_rotationState(0), m_id(0)
{
}

void Block::Draw()
{
	std::array<Position, 4> tiles = GetCellPositions();
	for (int i = 0; i < tiles.size(); i++)
	{
		DrawRectangle(tiles[i].coordinate[1] * m_cellSize + 1, tiles[i].coordinate[0] * m_cellSize + 1, 
			m_cellSize - 1, m_cellSize - 1, Colors::cellColors[m_id]);
	}
}

void Block::Move(int rowOffset, int colOffset)
{
	m_rowOffset += rowOffset;
	m_colOffset += colOffset;
}

std::array<Position, 4> Block::GetCellPositions()
{
	std::array<Position, 4> tilesToMove{};
	for (size_t i = 0; i < m_cells[m_rotationState].size(); i++)
	{
		Position newCellPos = Position{ m_cells[m_rotationState][i].coordinate[0] + m_rowOffset, 
			m_cells[m_rotationState][i].coordinate[1] + m_colOffset};
		tilesToMove[i] = newCellPos;
	}
	return tilesToMove;
}
