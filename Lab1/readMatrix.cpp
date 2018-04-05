/*********************************************************************
** Program name: readMatrix.cpp
** Author: Ryan Lew
** Date: 3/31/2018
** Description: Implementation file for the readMatrix function. This
				function asks the user to input each element for a 2d array
				either 2x2 or 3x3.
*********************************************************************/
#include <iostream>
#include "readMatrix.hpp"

void readMatrix(int** aPtr, int size) {
	
	for (int row = 0; row < size; row++) {
		for (int col = 0; col < size; col++) {
			std::cout << "Please enter the value for matrix element [" << (row + 1) << "]" << " [" << (col + 1) << "]" << std::endl;
			std::cin >> aPtr[row][col];
		}
	}
}