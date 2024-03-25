/***********************************************
Author: Maxim Simakoff

Date: 10/2/2023

Purpose: My program prompts the user to enter a number
for the amount of astericks it wants in a line. If the user 
enters a negative number or any string of characters, it'll
prompt the user again to rewrite the answer.

Time Spent: Right under an hour
***********************************************/

			// Daily 11
#include <stdio.h>

int clear_keyboard_buffer();
int draw_line(int x);

int main(int argc, char* argv[])
{
	int x;

	printf("Please enter the number of astericks you want in your line: ");
	scanf("%d", &x); 
	while (x <= 0 || x > 79)
	{
		printf("Im sorry, that number is unrecognized or out of range, try [1 - 79]: ");
		scanf("%d", &x);
		clear_keyboard_buffer();
	}
	draw_line(x);
	clear_keyboard_buffer();
	return 0;
}

int draw_line(int x)
{
	for(int i = 0 ; x > i ; i++)
	{
		printf("*");
	}
}
int clear_keyboard_buffer(void)
{
	char c;
	scanf("%c", &c);
	while (c != '\n')
	{
		scanf("%c", &c);
	}
}


//		CLASS NOTES
//#include <ctype.h>
//
//int main(int argc, char* argv[])
//{
//	int x = 0; //Initialization
//	while (x < 10) //Condition
//	{
//		printf("Happy Birthday!\n"); //Body
//		x++; // The thing that happens at the end of each iteration
//	}
//	//Semicolon is seperator of ideas
//	//While and For loop are the same, more preference based.
//	for (/* Intialization */;/* Condition */;/* The thing that happens after */)
//	{
//		//Body
//	}
//	for (x = 0;x < 10; x++)
//	{
//		printf("Happy Birthday!\n"); 
//	}
//
//	/*int days = 1;
//	while (days <= 12)
//	{
//		printf("On the %d day of Christmas my true love gave to me \n", days);
//		switch (days)
//		{
//		case 12:
//			printf("Twelve Drummers Drumming\n");
//		case 11:
//			printf("Eleven Pipers Piping\n");
//		case 10:
//			printf("Ten lords a leaping\n");
//		case 9:
//			printf("Nine ladies dancing\n");
//		case 8:
//			printf("Eight maids a milking\n");
//		case 7:
//			printf("Seven Swans a swimming\n");
//		case 6:
//			printf("Six geese a laying\n");
//		case 5:
//			printf("Five G O L D rings\n");\
//				switch (days) 
//				{
//				case 10:
//					printf("ba dum bum bum\n");
//					break;
//				case 11:
//					printf("Ba Dum Bum Bum\n");
//					break;
//				case 12:
//					printf("BA DUM BUM BUM\n");
//					break;
//				}
//		case 4:
//			printf("Four Calling Birds\n");
//		case 3:
//			printf("Three french hens\n");
//		case 2:
//			printf("Two turtles dovses and \n");
//		case 1:
//			printf("A partridge in a pear tree\n");
//		}
//		days++;*/
//	}
//
//	/*
//	char grade;
//	printf("Please enter the letter grade you made on the last quiz: ");
//	scanf(" %c", &grade);
//
//	switch (grade)
//	{
//	case 'A':
//	case 'a':
//		printf("Good Job!\n");
//		break;
//	case 'B':
//	case 'b':
//		printf("Ok Job\n");
//		break;
//	case 'C':
//	case 'c':
//		printf("Meh \n");
//		break;
//	case 'D':
//	case 'd':
//		printf("Not good\n");
//		break;
//	case 'F':
//	case 'f':
//		printf("Have you considered majoring in business?\n");
//		break;
//	default:
//		printf("Did you even read the question? \n");
//		}
//		*/
//
//	/*if (grade == 'A' || grade == 'a')
//	{
//		printf("Good Job!\n");
//	}
//	else if (grade == 'B')
//	{
//		printf("Ok Job\n");
//	}
//	else if (grade == 'C')
//	{
//		printf("Meh...\n");
//	}
//	else if (grade == 'D')
//	{
//		printf("Not good.\n");
//	}
//	else if (grade == 'F')
//	{
//		printf("Have you considered majoring in business.\n");
//	}
//	else
//	{
//		printf("Did you even read the question? \n");
//	}*/
//
//	return 0;
//}