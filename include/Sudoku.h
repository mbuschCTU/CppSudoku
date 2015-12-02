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
#include <string>

class Sudoku
{
public:
	Sudoku();
	Sudoku(std::string);
	virtual ~Sudoku();
	int solve();
	void print_board();
private:
	std::vector<Row> table[9];
	bool check_panel(int, int, int);
	bool check_column(int, int, int);
	bool check_row(int, int, int);
	int recursive_solve(int, int);

};

#endif /* SUDOKU_H_ */
