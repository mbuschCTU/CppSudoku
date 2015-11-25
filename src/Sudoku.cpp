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
				  table[i][j].putValue(c);
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
