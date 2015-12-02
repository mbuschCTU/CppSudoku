/*
 * Cell.h
 *
 *  Created on: Nov 19, 2015
 *      Author: adminuser
 */

#ifndef CELL_H_
#define CELL_H_


class Cell {
public:
	Cell();
	Cell(int v);
	Cell(const Cell&);
	virtual ~Cell();
	bool checkExists(int v);
	int getValue(){ return this->value; }
private:
	int value;
};

#endif /* CELL_H_ */
