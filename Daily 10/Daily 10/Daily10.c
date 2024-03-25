/***********************************************
Author: Maxim Simakoff
Date: 9/29/23

Purpose: This program prompts the user to input a negative integer,
if the input has letters or a positive integer, it prompts the user again 
to input a negative integer.

Time Spent: I spent around 35 minutes on this assignment
***********************************************/

#include <stdio.h>

int clear_keyboard_buffer();

int main(int argc, char* argv[])
{
	int x;
	int noc;

	printf("Please enter a negative integer: ");
	noc = scanf("%d", &x); //Number of Successful Conversions
	while (noc != 1 || x >= 0)
	{
		printf("Im sorry, you must enter a negative integer less than zero: ");
		noc = scanf("%d", &x);
		clear_keyboard_buffer();
	}
	printf("The negative integer was: %d \n", x);
	clear_keyboard_buffer();
	
	return 0;
}

int clear_keyboard_buffer(void)
{
	char c;
	scanf(" %c", &c);
	while (c != '\n')
	{
		scanf(" %c", &c);
	}
}






/*
		Class Notes - 10:30 to 10:50

//x++; //Changes Value after making a copy
//++x;

int main(int argc, char* argv[])
{
	char grade;
	printf("Please enter the letter grade you made on the last quiz: ");
	scanf(" %c", &grade);
	if (grade == 'A' || grade == 'a')
	{
		printf("Good Job!\n");
	}
	else if (grade == 'B')
	{
		printf("Ok Job\n");
	}
	else if (grade == 'C')
	{
		printf("Meh...\n");
	}
	else if (grade == 'D')
	{
		printf("Not good.\n");
	}
	else if (grade == 'F')
	{
		printf("Have you considered majoring in business.\n");
	}
	else
	{
		printf("Did you even read the question? \n");
	}
	
	return 0;
}
void clear_keyboard_buffer(void)
{
	char c;
	scanf("%c", &c);
	while (c != '\n')
	{
		scanf(" %c", &c);
	}
}
*/

/*
 
Class Notes - 10:15 to 10:30am
 
int some_function(void);

void clear_keyboard_buffer(void);

int main(int argc, char* argv[])
{
	int x;
	int noc;

	printf("Please enter a positive integer: ");
	noc = scanf("%d", &x); //Number of Successful Conversions
	clear_keyboard_buffer();
	while (noc != 1 || x < 1)
	{
		printf("Im sorry I dont understand?");
		printf(" Please enter a positive integer: ");
		noc = scanf("%d", &x);
		clear_keyboard_buffer();
	}
	printf("The value of x was finally set at %d\n", x);
	return 0;
}

int some_function(void)
{
	printf("Hello from some function\n");
	return 42;
}
void clear_keyboard_buffer(void)
{
	char c;
	scanf("%c", &c);
	while (c != '\n')
	{
		scanf("%c", &c);
	}
}	
*/

/* 
 Class Notes 10am - 10:15am
int some_function(void);

void clear_keyboard_buffer(void);


int main(int argc, char* argv[])
{
	int x,y;
	int noc;
	while (1)
	{
		noc = scanf("%d%d", &x, &y);
		clear_keyboard_buffer();
		printf("The value of x is %d \n", x);

		printf("The value of y is %d \n", y);

		printf("The value of noc is %d \n", noc);

	}
	return 0;
}

int some_function(void)
{
	printf("Hello from some function\n");
	return 42;
}
void clear_keyboard_buffer(void)
{
	char c;
	scanf("%c", &c);
	while (c != '\n')
	{
		scanf("%c", &c);
	}
}
*/