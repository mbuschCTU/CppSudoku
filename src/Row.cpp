/*
 * Row.cpp
 *
 *  Created on: Nov 19, 2015
 *      Author: adminuser
 */

#include "Row.h"
#include "Cell.h"

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

