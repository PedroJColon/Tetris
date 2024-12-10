#include "raylib.h"
#include "Colors.h"

#ifndef GRID_H
#define GRID_H

class Grid
{
public:
	Grid();
	void Print();
	void Draw();

	// Member Variables
	int m_grid[20][10];

private:
	void InitGrid();

	// Member Variables
	int m_numRows;
	int m_numCols;
	int m_cellSize;
};

#endif // !GRID_H