/***********************************************
Author: Maxim Simakoff
Date: 9/23/2023
Purpose: The user inputs any positive integer. If the input is even
divide it by 2. If the input is odd then first multiply it by 3 
and then add 1.
***********************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
	int number;
	printf("Please enter a Positive Integer: ");
	scanf("%d", &number);
	if (number % 2 == 0)
	{
		number = (number/2);
		printf("The next value of the number is: %d", number);
	}

	if (number % 2 == 1)
	{
		number = (number*3)+1;
		printf("The next value of the number is: %d", number);
		
	}
}




/*
		CLASS NOTES

#include <stdio.h>

int main(int argc, char* argv[])
{
	int x;
	printf("Please enter a value for the variable x: ");
	scanf("%d", &x);
	printf("\nThe value of our x is %d\n", x);
	
	// <
	// >
	// <=
	// >=
	// == EQUALS
	// != NOT EQUALS
	// ! NOT
	// && AND
	// || OR

	// + ADD
	// - SUBTRACT
	// * MULTIPLY
	// / DIVIDE
	// % MODULO

	if (x!=7 && x!=42)
	{
		printf("Is not 42 or 7\n");
	}
	else
	{
		printf("No, the value of x is invalid\n");
	}


	return 0;
}

*/