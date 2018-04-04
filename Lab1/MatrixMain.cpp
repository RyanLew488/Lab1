#include <iostream>
#include <sstream>
#include "readMatrix.hpp"
#include "determinate.hpp"


int main() {

	bool validInput = false;
	int matrixSize = 0;
	std::string str = "";
	
	
	do {
		std::cout << "Please select either a 2x2 or 3x3 matrix" << std::endl;
		std::cout << "2: 2x2 matrix" << std::endl;
		std::cout << "3: 3x3 matrix" << std::endl;
		std::getline(std::cin, str);
		std::stringstream valid(str);
		valid >> matrixSize;

	} while (matrixSize < 2 || matrixSize > 3);

		

	/*switch (matrixSize) {
	case 2:
		std::cout << "You selected a 2x2 matrix" << std::endl;
		validInput = true;
		break;
	case 3:
		std::cout << "You selected a 3x3 matrix" << std::endl;
		validInput = true;
		break;
	default:
		std::cout << "Please enter a valid choice" << std::endl; 
		break;
		
	}	
	*/
	int **matrix;
	matrix = new int*[matrixSize];
	for (int row = 0; row < matrixSize; row++) {
		matrix[row] = new int[matrixSize];
	}
	
	readMatrix(matrix, matrixSize);

	for (int row = 0; row < matrixSize; row++) {
		for (int col = 0; col < matrixSize; col++) {
			std::cout << "[" << matrix[row][col] << "]";
		}
		std::cout << std::endl;
	}
	
	int determinateValue = 0;
	determinateValue = determinate(matrix, matrixSize);
	std::cout << "The determinate of your matrix is: " << determinateValue;
	for (int row = 0; row < matrixSize; row++) {
		free(matrix[row]);
	}

	free(matrix);
	std::cin.get();
	std::cin.get();
	return 0;
}