/*
 * Row.h
 *
 *  Created on: Nov 19, 2015
 *      Author: adminuser
 */

#ifndef ROW_H_
#define ROW_H_

#include "/home/adminuser/workspace/Sudoku/include/CellGroup.h"
#include "/home/adminuser/workspace/Sudoku/include/Cell.h"

class Row: public CellGroup
{
public:
	Row();
	virtual ~Row();
	bool isUnique(int v);
//	Cell getCell(int i);
private:

};

#endif /* ROW_H_ */
