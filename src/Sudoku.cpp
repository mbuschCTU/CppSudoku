/*
 * Sudoku.cpp
 *
 *  Created on: Nov 19, 2015
 *      Author: adminuser
 */

#include "Sudoku.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;

Sudoku::Sudoku()
{
	// TODO Auto-generated constructor stub

}

Sudoku::~Sudoku()
{
	// TODO Auto-generated destructor stub
}

Sudoku::Sudoku(string fname)
{
	char c;
	ifstream myfile("fname");
	if (myfile.is_open())
	{

	  for (int i = 0; i < 9; i++)
	  {
		  for (int j = 0; j < 9; j++)
		  {
			  if (!(cin>>c))
			  {
				  cerr << "Bad file name\n";
				  exit(1);

			  }
			  if (c == '-' || (c >='0' && c<='9'))
			  {
				  if (c == '-')
				  {
					  table[i][j].putValue(0);
				  }
				  else
				  {
					  table[i][j].putValue(c -'0');
				  }
			  }
		  }
	  }

		myfile.close();
	}

	else cout << "Unable to open file";

}
bool Sudoku::check_panel(int x, int y, int v)
{
	bool unique = false;
	for (int i = y; i <= y+2; i++)
	{
		for (int j = x; j <= x+2; j++)
		{
			unique = table[x][y].isUnique(v);
		}
	}
	return unique;
}

bool Sudoku::check_column(int x, int y, int v )
{
	bool unique;

	for (int i = y; i < 9; i++)
	{
		unique = table[x][i].isUnique(v);
	}
	return unique;
}

int Sudoku::solve()
{
	return recursive_solve(0,0);
}

bool Sudoku::check_row(int r, int c, int v)
{
	Row row  = table[r][c];
	return row.isUnique(v);
}
int Sudoku::recursive_solve(int r, int c)
{
	int i;

	// Skip non-zero cells
	while( r<9 && table[r][c].getCell(c).getValue() != 0)
	{
		c++;
		if (c == 9)
		{
			r++;
			c = 0;
		}

	}

	// if true then we are done
	if (r == 9) return 1;

	// try each value. if successful return true
	for (i = 1; i <= 9; i++)
	{
		Row *row = table[r];
		row->putValue(i);
		if (check_row(r,c,i) && check_column(r,c,i) && check_panel(r - r%3, c - c%3, i) && recursive_solve(r,c))
		{
			return 1;
		}
	}
	table[r]][c].getCell(c).putValue(0);
	return 0;
}


void Sudoku::print_board()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
			std::cout << table[i][j].getCell(j).getValue() << " ";
		std::cout << endl;
	}
}



//      |   r, c     |    r, c + 1    |   r, c + 2    |
//      -------------------------------------------------------
//      | r + 1, c   |  r + 1, c + 1  | r + 1, c + 2  |
//      -------------------------------------------------------
//      | r + 2, c   |  r + 2, c + 1  | r + 2, c + 2  |
//      -------------------------------------------------------



// or = 3, oc = 3

// r - r %  3






