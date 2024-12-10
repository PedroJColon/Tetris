#include "Grid.h"
#include <iostream>

Grid::Grid() : m_numRows(20), m_numCols(10), m_cellSize(30)
{
	InitGrid();
}

void Grid::Print()
{
	for (int y = 0; y < m_numCols; y++)
	{
		for (int x = 0; x < m_numRows; x++)
		{
			std::cout << m_grid[x][y] << " ";
		}
		std::cout << std::endl; 
	}
}

void Grid::Draw()
{
	for (int y = 0; y < m_numCols; y++)
	{
		for (int x = 0; x < m_numRows; x++)
		{
			int cellValue = m_grid[x][y];
			DrawRectangle(y * m_cellSize + 1, x * m_cellSize + 1, m_cellSize - 1, m_cellSize - 1, Colors::cellColors[cellValue]);
		}
	}

}

void Grid::InitGrid()
{
	for (int y = 0; y < m_numCols; y++)
	{
		for (int x = 0; x < m_numRows; x++)
		{
			m_grid[x][y] = 0;
		}
	}
}
