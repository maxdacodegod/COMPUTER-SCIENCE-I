/*
							40 Packet Questions
							1 Structure 
							1 Dynamic Memory Allocation
							1 FILES
							1 ARRAYS
							Definitions
							Expression Evaluation: [], &,  * 
							Pointer Arithmetic
							C String Problem
*/

/* Libraries */
#include <stdio.h> - printf, scanf, fprintf, fscanf;
#include <math.h> - sqrt, sin, cos, exp, log;
#include <stdlib.h> - malloc, rand;
#include <ctype.h> - isalpha, isdigit, toupper, tolower;
#include <time.h> - time;
#include <malloc.h> -  malloc, free;


/* MAKE SURE TO STUDY QUIZ's, REPEAT PROBLEMS, He doesnt like changing problems */

/* DO stuff with arrays, print backwards, etc.*/



/* Variable Types */
/*
	int; - integer EX. 5
	char; - Character EX. 'c'
	double; - EX. 3.5
	float; - Ex. 3.14159
*/

/* all % */
/*
%f - Float
%lf - Long Float
%d - Integer
%c - Character
%s - String
%g - Floating point in shortest notation
%e - Scientific Notation
*/ 

/*
Difference between x++ and ++x
x++ - Post-increment
++x - Pre-increment
*/


/* FUNCTION HEADER */
type NAME(PARAMETERS);

/* SWITCH STATEMENTS */
int x = 0;
switch (x)
{
case 1:
	break;
case 2:
	break;
default:
	return 0;
}

/* DYNAMIC MEMORY ALLOCATION*/
/* 2 Part Problem, Creating DYNAMIC Memory Allocation, then using stuff with arrays.*/
int main(int argc, char* argv[])
{
	int* p;

	p = (int*)malloc(sizeof(int) * 500); 
	// This returns the address of the first element of the array
	//and it knows the array is 500 indexes
	
	if (p = NULL)
	{
		printf("Blah");
		exit(1);
	}
	free(p);
	return 0;
}


char* x = "cat"; // ONLY READ not WRITE, only with malloc you can edit.


/* ENUMs */
/*
	List of Name constants
	No matter WHAT, increment up by +1.

	enum MyType{One = 1, Two, Three, Four, Five};



*/

/* Structs */
/*
	Structure to basically hold data in an organized manner.
	Exam = Declare a structure, typedef, declare and initialize it, pass to function.
	Examples = Coordinate, Card, Date, Student.

	Practice Problem

*/

struct coordinate
{
	double x;
	double y;
};
typedef struct coordinate Coordinate;

int main(int argc, char* argv[])
{
	//Short way
	Coordinate point = { 3.0,5.0 };

	//Long way
	Coordinate point;
	point.x = 3.0;
	point.y = 5.0;

	printf("(%f,%f)\n", point.x, point.y);

}


/********************************************************************************************************/
enum rank { ACE = 1,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,JACK,QUEEN,KING}; // INC by 1 every index

typedef enum rank Rank;

struct card 
{
	Rank rank;
	int suit;
};

typedef struct card Card;

int main(int argc, char* argv[])
{
	Card my_card;

	my_card.rank = KING;
	my_card.suit = SPADES;
	return 0;
}
