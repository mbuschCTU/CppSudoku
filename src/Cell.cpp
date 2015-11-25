/*
 * Cell.cpp
 *
 *  Created on: Nov 19, 2015
 *      Author: adminuser
 */

#include "/home/adminuser/workspace/Sudoku/include/Cell.h"

Cell::Cell()
{
	value = 0;

}

Cell::~Cell()
{
	// TODO Auto-generated destructor stub
}

Cell::Cell(int v)
{
	if (v > 0 && v <= 9)
		value = v;
	else
		throw "Value out of range" + v;
}

bool Cell::checkExists(int v)
{
	return value == v;
}
Cell::Cell(const Cell& c):value(c.value)
{

}
