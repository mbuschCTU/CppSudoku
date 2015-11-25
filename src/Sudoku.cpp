/*
 * Sudoku.cpp
 *
 *  Created on: Nov 19, 2015
 *      Author: adminuser
 */

#include "Sudoku.h"

Sudoku::Sudoku()
{
	// TODO Auto-generated constructor stub

}

Sudoku::~Sudoku()
{
	// TODO Auto-generated destructor stub
}

bool Sudoku::check_panel(int x, int y, int v)
{
	for (int i = y; i <= y+2; i++)
	{
		for (int j = x; j <= x+2; j++)
		{
			table[x][y].isUnique(v);
		}
	}

}
