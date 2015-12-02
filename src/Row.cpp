/*
 * Row.cpp
 *
 *  Created on: Nov 19, 2015
 *      Author: adminuser
 */

#include "Row.h"
#include "Cell.h"
#include <vector>

Row::Row() {
	// TODO Auto-generated constructor stub

}

Row::~Row() {
	// TODO Auto-generated destructor stub
}

bool Row::isUnique(int v)
{
	for (int i = 0; i < 9; i++)
	{
		//Cell c = getCell(i);
		if ( getCell(i).checkExists(v))
			return false;
	}
	return true;
}

int Row::calcTotal()
{
	int total =0;
	 for (std::vector<Cell>::iterator it = cells->begin() ; it != cells->end(); ++it)
	 {
		 total += it->getValue();
	 }

	 return total;
}
