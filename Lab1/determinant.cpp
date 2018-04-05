/*********************************************************************
** Program name: determinate.cpp
** Author: Ryan Lew
** Date: 3/31/2018
** Description: Implementation file for the the determinate function. 
**				It returns the determinate for either a 2x2 or 3x3 matrix.
*********************************************************************/

#include <iostream>
#include "determinant.hpp"

int determinant(int** aPtr, int size) {
	int det;

	if (size == 2) {
	
		det = (aPtr[0][0] * aPtr[1][1]) - (aPtr[1][0] * aPtr[0][1]);
	}

	else {

		det = (aPtr[0][0] * ((aPtr[1][1] * aPtr[2][2]) - (aPtr[2][1] * aPtr[1][2]))) - 
			  (aPtr[0][1] * ((aPtr[1][0] * aPtr[2][2]) - (aPtr[2][0] * aPtr[1][2]))) + 
			  (aPtr[0][2] * ((aPtr[1][0] * aPtr[2][1]) - (aPtr[2][0] * aPtr[1][1])));	   
	}
	return det;
}