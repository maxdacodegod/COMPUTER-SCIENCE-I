/***********************************************
Author: Maxim Simakoff
Date: 9/25/23
Question: Insert the answer to the following question: 
What happens if the integer that you type is again big? Say 500000? 
Why is this behavior different than what you saw with your daily6?

Answer to Question: The program still runs succesfully no matter the size of the number because there is no recursion 
meaning there is no stack overflow.
***********************************************/
#include <stdio.h>

loop_down_to_zero();
loop_up_to_int();


int main(int argc, char* argv[])
{
	int num;
	int val;
	printf("Please enter a positive integer: ");
	
	if (scanf(" %d", &num) == 1 && num > 0)
	{
		val = num;
	}
		
	loop_down_to_zero(num);
	num = 0;
	loop_up_to_int(num, val);
	return;
}

loop_down_to_zero(num)
{
	
	while (num >= 0)
	{
		printf("%d\n", num);
		num = num - 1;
	}
	printf("****\n");
}


loop_up_to_int(num, val)
{

	while (num <= val)
	{
		printf("%d\n", num++);
		
	}

}




/*
								CLASS NOTES

		Sometimes we write code, but there are better habits to write better code!

	//If statement
	int main(int argc, char* argv[])
	{
		int x;
		if (x == 7) printf("woot");
		return 0;
	}


	// INFINITE LOOP BELOW
	int x= 0;
	while (x<10)
	{
		printf("Happy Birthday! \n");
		x = x + 1;
	}

	Both adding 1 Different evaluation
	x++ vs ++x
   first  later
   x++ = Copy of the value of x before we change it
   ++x =

	Steps:	   3  6  2  7  5  8  4  2  1
   EXAMPLE =  x++ + x++ + ++x + ++x + x++
	
	Basically = DO NOT! DO THIS



			LECTURE NOTES


void clear_keyboard_buffer(void);

int main(int argc, char* argv[])
{
	char answer;
	do
	{
		while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
		{
			printf("Im sorry but I do not understand \n");
			printf("Do you wish to continue? (y/n) : ");
			scanf(" %c", &answer);
			clear_keyboard_buffer();
		}
	}

	while (answer == 'y' || answer == 'Y')
	{

		printf("Happy Birthday! \n");
		printf("Do you wish to continue? (y/n) : ");
		scanf(" %c", &answer);
		clear_keyboard_buffer();
		while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
		{
			printf("Im sorry but I do not understand \n");
			printf("Do you wish to continue? (y/n) : ");
			scanf(" %c", &answer);
			clear_keyboard_buffer();
		}

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