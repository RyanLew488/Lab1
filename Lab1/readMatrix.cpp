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