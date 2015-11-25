/*
 * Sudoku.h
 *
 *  Created on: Nov 19, 2015
 *      Author: adminuser
 */

#ifndef SUDOKU_H_
#define SUDOKU_H_

#include<vector>
#include "Row.h"

class Sudoku {
public:
	Sudoku();
	virtual ~Sudoku();
private:
	std::vector<Row> table[9];
	bool check_panel(int, int, int);
	bool check_column(int);

};

#endif /* SUDOKU_H_ */
