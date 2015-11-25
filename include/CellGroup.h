/*
 * CellGroup.h
 *
 *  Created on: Nov 19, 2015
 *      Author: adminuser
 */

#ifndef CELLGROUP_H_
#define CELLGROUP_H_

#include <vector>
#include "Cell.h"

class CellGroup
{
public:
	CellGroup();
	virtual ~CellGroup();
	virtual bool isUnique() = 0;
	virtual int calcTotal() = 0;
	bool isComplete();
	Cell getCell(int c);
protected:
	std::vector <Cell> cells[9];
	static const int total_value = 45;
};

#endif /* CELLGROUP_H_ */
