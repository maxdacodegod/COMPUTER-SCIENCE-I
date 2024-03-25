/***********************************************
Author: Maxim Simakoff
Date: 11/15/23
Purpose: The program takes numbers from 2 text files and then organizes them in order from least to greatest
and then prints the sum all in the output text file.
Sources of Help: Class Notes
Time Spent: 2 Hours
***********************************************/

/***********************************************
* QUESTIONS
• What if one of the files contains no numbers? Does the program with just the numbers2 file and ignores
the empty text file.
• What if both of the files contain no numbers? Just prints "The sum of all the numbers is 0" in the output file.
• What happens if one of the files has many more numbers than the other? Nothing irregular occurs, just 
outputs as many as you give it with the correct corresponding sum.
***********************************************/
/***********************************************
TXT1 NUMBERS
1
4
5
6
8
12
15
22
24
25
***********************************************/
/***********************************************
TXT2 NUMBERS
2
3
7
17
59
67
68
78
79
98
***********************************************/

#include <stdio.h>
#include <stdlib.h>

void arrangeSum(FILE* num1, FILE* num2, FILE* output);

int main(int argc, char* argv[])
{
	FILE* file1 = fopen("numbers1.txt", "r"); // Pointing to File1 which is numbers1.txt and reading it
	FILE* file2 = fopen("numbers2.txt", "r");
	FILE* output = fopen("output.txt", "w");

	if (file1 == NULL || file2 == NULL || output == NULL) 
	{
		printf("Error opening files.\n");
		exit(1);
	}

	arrangeSum(file1, file2, output);

	fclose(file1);
	fclose(file2);
	fclose(output);

	return 0;
}

void arrangeSum(FILE* num1, FILE* num2, FILE* output)
{
	int number1;
	int number2;
	int sum = 0;
	int noc1 = fscanf(num1, " %d", &number1);
	int noc2 = fscanf(num2, " %d", &number2);

	while (noc1 == 1 || noc2 == 1)
	{
		if ((noc2 != 1 || number1 <= number2) && noc1 == 1)
		{
			fprintf(output, "%d\n", number1);
			sum = sum + number1;
			noc1 = fscanf(num1, " %d", &number1);
			
		}
		if ((noc1 != 1 || number2 <= number1) && noc2 == 1)
		{
			fprintf(output, "%d\n", number2);
			sum = sum + number2;
			noc2 = fscanf(num2, " %d", &number2);
			
		}
	}
	
	fprintf(output, "The sum of all the numbers is %d", sum);
}

/*CLASS NOTES*/
/*
#include <stdio.h>

void f(int a, int b, int c)
{
	int* p = &b;
	int i;
	for (i = -1; i < 2; i++)
	{
		printf("Looking around %d \n", *(p+1));
	}
	printf("the value of a is %d %d\n", a, p[-1]);
	printf("the value of b is %d %d\n", b, *p);
	printf("the value of c is %d %d\n", c, p[1]);
}

int main(int argc, char* argv[])
{
	int a = 7;
	int b = 11;
	int c = 42;
	int* p = 36;
	int i;
	
	f(a, b, c);

	int numbers[50];

	numbers[0] = 42;
	numbers[1] = 7;
	numbers[2] = 103;
	numbers[51] = 9001; //Array out of bounds access
	//Any array index needs to be in bounds 
	printf("%p \n", numbers);
	printf("%p \n", &numbers[0]);
	printf("%p \n", numbers + 0);

}
// [] - General Dereference
int main() {

	int numbers[10] = { 7,8,9,3,4,2,5,1,6,0 };
	int i;
	int sum = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", numbers[i]);
		sum += numbers[i];
	}

	printf("The avg number in the array is %f\n",(double) sum / 10);

	printf("The number of bytes in number is %d \n", sizeof(numbers));

	// *(n+1)  ==  n[1]     its the same thing
}

void printarray(int n[], int size);

void printarray(int n[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d\n", n[i]);
	}
}

void print_sum_of_consecutive_pairs(int n[], int size);

void print_sum_of_consecutive_pairs(int n[], int size)
{
	int i;
	for (i = 0; i < size - 1; i++)
	{
		printf("%d\n", n[i] + n[i+1]);
	}
}

double a[10] = {1.1,2.2,3.3,4.4,3.14159,5.5,6.6,7.7,8.8,9.9};
int out_of_order(int a[], int size); // Int since returning index
int out_of_order(int a[], int size)
{
	int i;

	for (i = 0; i < size - 1; i++)
	{
		if (a[i] > a[i + 1])
		{
			return a[i];
		}
	}
	return -1;
}

//ARRAYS DO NOT HAVE NULL TERMINATORS
printf("%c", "cat"[1]);

//void function(int *n);
// THESE TWO ARE THE SAME THING
//void function(int n[]);


// void function ( int n[], int size); ARRAY AND SIZE OF ARRAY
/*
int main()
{
	char tic_tac_toe[3][3] = { '\0' };
	// Two Dimensional Array
}

int find_index_of_largest(int n[], int size)
{
	int i;
	int index_of_largest = 0;
	for (i = 0; i < size; i++)
	{
		if (n
			{
			}
	}
}
*/
