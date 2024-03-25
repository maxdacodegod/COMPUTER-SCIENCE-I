/***********************************************
Author: Maxim Simakoff
Date: 9/20/23
Purpose: The purpose of the program is that a user can input
any given number and the binary representation will be printed
***********************************************/
#include <stdio.h>

void print_binary(int number)
{
	//if the argument printed in the print_binary(x); in the main and x>1 run the if statement
	if (number > 1)
	{
		// 22 = 43 / 2
		int quotient = number / 2;
		//RECURSION
		print_binary(quotient);
		// 1 = 43 % 2
		int remainder = number % 2;
		printf("%d", remainder);
	}
	//if the argument printed in the print_binary(x); in the main and x=1 just print 1
	else if (number == 1)
	{
		printf("%d", number);
	}
	//if the argument printed in the print_binary(x); in the main and x=0 just print 0
	else if (number == 0)
	{
		printf("%d", number);
	}
}

int main(int argc, char* argv[])
{
	//input test value into the argument. print_binary(x);
	print_binary(123456789);
	printf("\n");
	return 0;
}

//CLASS NOTES BELOW
/*
		Class Notes

#include <stdio.h>

// Problem: Towers of Hanoi 
void towers(int number_of_disks, int from, int to, int spare);

int main(int argc, char* argv[])
{
	towers(3, 1, 3, 2);

	return 0;
}

void towers(int number_of_disks, int from, int to, int spare)
{
	printf("Calling function with %d %d %d %d\n", number_of_disks, from, to, spare );
	
	if (number_of_disks > 0)
	{
		int i;
		for (i = 0; i <= 64 - number_of_disks; i++)
		{
			printf("|");
		}
	printf("\n");
	}

	if (number_of_disks > 0)
	{
		towers(number_of_disks - 1, from, spare, to);
		printf("Move Disc %d from peg %d to peg %d\n", number_of_disks, from, to);
		towers(number_of_disks -1, spare, to, from);
	}
}

*/ 
// FAILED ATTEMPTS BELOW
/*
#include <stdio.h>

void print_binary(int number, int binary_number, int remainder);

int main(int argc, char* argv[])
{
	print_binary(2,0,0);

	return 0;
}

void print_binary(int number, int binary_number, int remainder)
{
	printf("The number inputted is %d\n\n", number);
		
	if (number >= 2)
	{
		remainder = number % 2;
		if (remainder = 0)
		{
			printf("%d", remainder);
		}
		if()
		{
			printf("0");
		}
		number = number / 2;
	}
	else if (number < 1)
	{
		printf("00000000");
	}
	else if (number = 1)
	{
		printf("00000001");

	}
	//printf("The Binary Representation is %d\n\n", binary_number);
	//printf("Remainder is %d\n\n", num_rem);

}
*/
/*
#include <stdio.h>

void print_binary(int number)
{
	//printf("\nThe number inputted is %d\n\n", number);

	if (number >= 1)
	{
		
		// 57 = 115 / 2
		int quotient = number / 2;
		// new 57 = new 57
		int num = quotient;
		printf("%d = post division\n", num);
		// 1 = 115 % 2
		int remainder = number % 2;
			if (remainder == 1)
			{
				printf("\r%d = remainder\n", remainder);
			}
			if (remainder == 0)
			{
				printf("\r%d = remainder\n", remainder);
			}
			number = quotient;
			printf("%d = end value\n", number);
			=

			// 57 = 115 / 2
int quotient = number / 2;
// new 57 = new 57
int num = quotient;
//printf("%d = post division\n", num);
// 1 = 115 % 2
int remainder = number % 2;
//IF statement thingy
if (remainder == 1)
{
	//remainder + 1;

	printf("%d", remainder);

}
else if (remainder == 0)
{
	//remainder + 0;

	printf("%d", remainder);

}
number = quotient + 0;
//RECURSION
print_binary(number);

if (remainder == 3)
{
	number = quotient - 3;

	printf("%d", number);

}

//printf("\n%d = end value\n", number);


	}



}

int main(int argc, char* argv[])
{
	print_binary(115);

	return 0;
}
*/