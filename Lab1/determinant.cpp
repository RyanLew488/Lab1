#include <iostream>
#include "determinate.hpp"

int determinate(int** aPtr, int size) {
	int det;
	if (size == 2) {
		std::cout << "You are running the determinate for a 2x2" << std::endl;
		int a = 0;
		int b = 0;
		a = (aPtr[0][0] * aPtr[1][1]);
		b = (aPtr[1][0] * aPtr[0][1]);

		std::cout << "The values are: " << a << " " << b << std::endl;
		det = a - b;
	}

	else {

		std::cout << "3x3 Matrix " << std::endl;
		int a = 0,
			b = 0,
			c = 0;
		a = (aPtr[0][0] * ((aPtr[1][1] * aPtr[2][2]) - (aPtr[2][1] * aPtr[1][2])));
		b = (aPtr[0][1] * ((aPtr[1][0] * aPtr[2][2]) - (aPtr[2][0] * aPtr[1][2])));
		c = (aPtr[0][2] * ((aPtr[1][0] * aPtr[2][1]) - (aPtr[2][0] * aPtr[1][1])));

		std::cout << "Thevalues are: " << a << " " << b << " " << c << std::endl;
		det = a - b + c;
			    
			   
			   
	}
	return det;
}