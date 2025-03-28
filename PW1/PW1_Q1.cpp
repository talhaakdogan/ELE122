#include <stdio.h>

int mysqrt(int number); /* This function calculates the square root of the given number. */

int main(){

  
  printf("integer root: %d\n", mysqrt(409)); /* To print result to the screen */
	printf("integer root: %d\n", mysqrt(144));
	printf("integer root: %d", mysqrt(78));
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

