
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int GCD(int a, int b);     /*This function calculates greatest common divisor of two integers.
			     If the function does not return any result, one of the integers is 
		             probably 0. Please enter a different value.                         */


int main() {

	int a, b;
	printf("Enter the first integer: ");       
	scanf("%d", &a);						/* input of first integer. */
	printf("Enter the second integer: ");         
	scanf("%d", &b);						/* input of second integer. */
	printf("Greatest common divisor of these two integer is %d", GCD(a,b)); /* the result. */
					/*If you enter numbers into the GCD(a, b) 
					function, the result will be based on the 
					numbers written inside the GCD function.
					Example: GCD(18,15)			             */	

  
	return 0;
}

int GCD(int a, int b) {
	int r;
	if (a >= b) {              /* If a is greater than (or equal to) b.*/
		while ((a % b) > 0) {
			r = a % b;
			a = b;
			b = r;
		}
		return b;
	}
	else {                    /* If b is greater than a.*/
		while ((b % a) > 0) {
			r = b % a;
			b = a;
			a = r;
		}
		return a;
	}

}
/***************************************
A SAMPLE RUN IS AS FOLLOWS:


Enter the first integer: 36
Enter the second integer: 27
Greatest common divisor of these two integer is 9


***************************************/
