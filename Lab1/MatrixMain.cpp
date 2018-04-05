/*********************************************************************
** Program name: MatrixMain
** Author: Ryan Lew
** Date: 3/31/2018
** Description: A program to calculate either a 2x2 or 3x3 matrix's determinate
*********************************************************************/

#include <iostream>
#include <sstream>
#include "readMatrix.hpp"
#include "determinant.hpp"

/*********************************************************************
** main creates a dynamic 2d array, prints out the array and calculates
** the determinate for either a 2x2 or 3x3 matrix. Simply run the program
** to run the functions.
*********************************************************************/
int main() {

	bool validInput = false;
	int matrixSize = 0;
	std::string str = "";
	
	//input validation
	do {
		std::cout << "Please select either a 2x2 or 3x3 matrix" << std::endl;
		std::cout << "2: 2x2 matrix" << std::endl;
		std::cout << "3: 3x3 matrix" << std::endl;
		std::getline(std::cin, str);
		std::stringstream valid(str);
		valid >> matrixSize;

	} while (matrixSize < 2 || matrixSize > 3);

	int **matrix;
	//creating the 2d array based on user input
	
	matrix = new int*[matrixSize];					//create rows 
	for (int row = 0; row < matrixSize; row++) {	
		matrix[row] = new int[matrixSize];			//create columns
	}
	
	//ask user to input the elements for the matrix
	readMatrix(matrix, matrixSize);

	//print out each element of the array
	for (int row = 0; row < matrixSize; row++) {
		for (int col = 0; col < matrixSize; col++) {
			std::cout << "[" << matrix[row][col] << "]";
		}
		std::cout << std::endl;
	}
	
	//calculate the determinate of the array
	int determinantValue = 0;
	determinantValue = determinant(matrix, matrixSize);
	std::cout << "The determinant of your matrix is: " << determinantValue;
	
	//free the memory
	for (int row = 0; row < matrixSize; row++) {
		delete[]matrix[row];
	}
	delete[]matrix;
	
	std::cin.get();
	std::cin.get();
	return 0;
}