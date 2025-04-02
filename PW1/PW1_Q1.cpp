#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mysqrt(int number); /* This function calculates the square root of the given number. */

int main(){


	printf("%d\n", mysqrt(409)); /* To print result to the screen */
	printf("%d\n", mysqrt(144));
	printf("%d", mysqrt(78));
	return 0;
}


int mysqrt(int number){ /* Definition of the function. */

	int result;
	for (result = 0; result * result <= number; result++);
	result -= 1;
	return result;
}
/***************************
A SAMPLE RUN IS AS FOLLOWS:
20
12
8
****************************/
