/*
 * CellGroup.cpp
 *
 *  Created on: Nov 19, 2015
 *      Author: adminuser
 */

#include "/home/adminuser/workspace/Sudoku/include/CellGroup.h"

CellGroup::CellGroup() {
	// TODO Auto-generated constructor stub

}

CellGroup::~CellGroup() {
	// TODO Auto-generated destructor stub
}

bool CellGroup::isComplete()
{
	return calcTotal() == total_value;
}
Cell CellGroup::getCell(int c)
{
	return cells->at(c);
}
void CellGroup::putValue(int v)
{

}
