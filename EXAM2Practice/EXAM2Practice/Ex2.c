/*
Pass by reference - Pointers - HAVE TO KNOW
Do things with ARRAYS - Pass the Size - Read Array - Declare Array - Add up Values in Arrays - Writing Out - of - Bounds - First Index is always 0
Files - 4 Functions - fopen fclose fscanf fprintf
'\0' - Null Character
*/

/*
Sample Exam Questions and Extra Practice(Canning Problems)

56)
Write a function called sum that accepts two integer arguments and modifies the value of a third integer
argument so that the third parameter contains the sum of the first two values.The function should return -1 if
the sum happens to be negative, positive 1 if the sum is postive and 0 otherwise.
*/
/*
#include <stdio.h>

int sum(int num1, int num2);

int main(int argc, char* argv[])
{
	int num1;
	int num2;
	
	printf("Enter num1: ");
	scanf(" %d", &num1);
	printf("Enter num2: ");
	scanf(" %d", &num2);
	int total = sum(num1, num2);


	if (total > 0)
	{
		return 1;
	}
	if (total == 0)
	{
		return 0;
	}
	if (total < 0)
	{
		return -1;
	}
}

int sum(int num1, int num2)
{
	return num1 + num2;
}
*/

/*
57)
Write a function that asks the user for the desired temperature for a meeting room in your office building.
The function, set_temperature, should modify a single parameter of type double and accept any values between 
65 and 75 degrees including the end points.If the user attempts to set the temperature outside of this 
given range then the paricipants will probably not be comfortable so your function should keep asking
the user for a new temperature until they give a value in the specified range. You must fill in a
function declaration, function call, and function definition using the  sample driver program given below.
*/
/*
#include <stdio.h>
double set_temp(double temperature);


int main(int argc, char* argv[])
{
	double temperature = 0;
	// Insert function call here to change the temperature level.
	temperature = set_temp(temperature);
	printf("The new temperature level has been successfully set to %g degrees F. \n", temperature);
	return 0;
}
double set_temp(double temperature)
{
	printf("Enter temp for the meeting room: ");
	scanf(" %lf", &temperature);
	while (!(65 <= temperature && temperature <= 75))
	{
		printf("Enter again\n\n ");
		printf("Enter temp for the meeting room: ");
		scanf(" %lf", &temperature);
	}
	return temperature;
}

*/

/*
Sample Exam Questions and Extra Practice(Canning Problems)

51) Canning Program 26: fgetc and toupper
Write a program that reads in a text file character by character using fgetc.
The name of the text file is testdata26.Your program should print out an exact copy of the file it 
read in except that all lowercase letters are converted to uppercase letters.You may 
use the function toupper(see appendix D).You should also use the function putchar.
*/
/*
#include <stdio.h>
#include <ctype.h>
int main(int argc, char* argv[])
{
	FILE* file = fopen("testdata26.txt", "r");
	
	if (file == NULL) 
	{
		printf("Could not open the file.\n");
		return 1;
	}
	int ch;

	while ((ch = fgetc(file)) != EOF)
	{
		if (islower(ch))
		{
			ch = toupper(ch);
		}
		printf("%c", ch);
	}
	
	fclose(file);
}

*/

/*
52) Canning Program 29: Find the Average
Get into the emacs editor and create a file named testdata29 that contains 4 integer values.
Write a program that will compute the average of the four numbers.Remember that the value of the average 
in not necessarily an integer value.Also remember that truncation will occur if you divide an integer 
by an integer. For example, if the numbers in the file were : 1 2 3 4 then the answer should be 2.5 (not 2).




53) Write a complete program that will open a file called numbers.txt that contains only integers 
separated by some white space characters.Your program should add up all of the numbers and print out 
the sum and the average of all the integers in the file.
*/
/*
#include <stdio.h>
#include <ctype.h>
int main(int argc, char* argv[])
{
	FILE* file = fopen("numbers.txt","r");
	if (file == NULL)
	{
		printf("Could not open the file.\n");
		return 1; // Return an error code
	}
	int number;
	int sum = 0;
	while (fscanf(file, "%d", &number) != EOF)
	{
		sum = number + sum;
	}
	printf("Sum is %d ", sum);
	fclose(file);
}
*/


/*
54) Canning Program 21: Argv
Write a C program that will print out each command line argument on a separate line.Use a for - loop.
The loop should have an index variable i that ranges from 0 to(argc - 1).Remember the first command 
line argument is called argv[0] and its type is string so you can print it out with a % s format code.
You should also recall that the character combination \n means newline.

55) Canning Program 23: Scanf Returns What ?
Create a file and call it testdata23.The file should contain an unknown number of integer values.
Write a C program that uses a while loop to read in each number and then prints the number back onto 
the screen.The boolean expression of the while loop must contain a call to the fscanf function.
You need to read your book.Look at page 63. Study the code there. 
Make certain you understand why it is this way. Willa Cather wrote My Antonia.

56) Canning Program 24: One Dimensional Array
Create a file and call it testdata24.The file should contain exactly 15 integer values.
Read these 15 numbers into a one - dimensional array.Then print the numbers out in the reverse order 
from which they were entered. Use an array.I do not want you to create 15 distinct variables.
Read your book.Become independent.
*/
/*
#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
	int myarray[15];
	int i = 0;
	FILE* file = fopen("testdata24.txt", "r");

	if (file == NULL)
	{
		printf("Could not open the file.\n");
		return 1;
	}

	for (i = 0; i < 15; i++)
	{
		fscanf(file, "%d", &myarray[i]);
	}

	for (i = 14; i >= 0; i--)
	{

		printf("%d \n", myarray[i]);
	}
	fclose(file);
	return 0;
}

*/

/*
59) Canning Program 25: Sum of a Bunch
Create a file and call it testdata25.The file should contain an unknown number of integer values.
Write a program that will read in these numbers until end of file is reached and then outputs the 
sum of the numbers.You should not use an array to do this problem.
*/
/*
#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
	int number; 
	int sum = 0;
	FILE* file = fopen("testdata25.txt", "r");

	if (file == NULL) 
	{
		perror("Error opening file");
		return 1;
	}

	while (fscanf(file, "%d", &number) != EOF)
	{
		sum += number;
	}
	printf("%d", sum);
	fclose(file);
	return 0;
}
*/

/*
60) Canning Problem 10: Sum of Twenty
Write a C program that reads in 20 positive integer values from a file called testdata10 and computes their sum,
and then prints the value of the sum onto the screen.Your program should not use 20 distinct variables.
Your program should not use an array. Julie Andrews played Mary Poppins.
*/
/*
#include <stdio.h>
#include <ctype.h>
int main(int argc, char* argv[])
{
	int sum = 0;
	int num;
	FILE* file = fopen("testdata10.txt","r");

	if (file == NULL)
	{
		perror("Error opening file");
		return 1;
	}
	while (fscanf(file, "%d", &num) != EOF)
	{
		sum += num;
	}
	printf("%d", sum);
	fclose(file);
	return 0;
}
*/

/*
61) Canning Problem 8: One Horizontal Line of Asterisks
Using the emacs editor, create a file called testdata8 that has a single integer value stored into it.
The integer will be a number between 1 and 30 inclusive. Create a C program that uses the fscanf function 
to read in this integer value and then prints a horizontal line containing that many asterisks’(*).
Use a for - loop in your program.For example,

If the file contained the integer 8 your program would print out : ********
If the file contained the integer 15 your program would print out : ***************
*/
/*
#include <ctype.h>
#include <stdio.h>
int main(int argc, char* argv[])
{
	int x = 0 ;
	int i = 0;
	FILE* file = fopen("testdata8.txt", "r");
	if (file == NULL)
	{
		perror("File doesnt work");
		return 1;
	}

	fscanf(file, "%d", &x);

	for (i = 0; i<x; i++)
	{
		printf("*");
	}
	fclose(file);
	return 0;
}
*/
/*
63) Write a complete program that will open a file called blog.txt that contains a blog entry for a 
particular web page and displays the entire blog entry on the screen.
*/
/*
#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
	FILE* file = fopen("blog.txt", "r");

	if (file == NULL) 
	{
		perror("Error opening file");
		return 1;
	}

	char buffer[1000];

	while (fgets(buffer, sizeof(buffer), file) != NULL) 
	{
		printf("%s", buffer);
	}

	fclose(file);
	return 0;
}
*/
/*
64) Write a complete program that will open a file called input.txt that contains a mixture of characters 
and integer values.Your program should output the largest and smallest of all the numbers and a count 
of the number of capital letters in the file.
*/
/*
#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
	int arr[50];
	FILE* file = fopen("input.txt","r");
	if (file == NULL)
	{
		perror("ERROR!");
		return 1;
	}
	int i = 0;
	while (fscanf(file, "%d", &arr[i]) != EOF)
	{
		i++;

		if (i >= 50)
		{
			printf("Array is full. Exiting loop.\n");
			break;
		}
	}
	for (int j = 0; j < i; j++)
	{
		printf("%d \n", arr[j]);
	}
	fclose(file);
	return 0;
}
*/
/*
67) Canning Problem 16: Sine Function
Read an integer or floating point value from the command line.It will come into your program as argv[1].
Remember that argv[1]’s type is a pointer to a character that begins a sequence of characters that end 
in a null byte.In other words, it is what is agreed upon as a string.
String is not a base type within the C language.
For example,
bash > . / a.out 4.3

Print out the trigonometric sine value of the number represented by argv[1].
You would do this by calling the proper functions that are found in Appendix D of you textbook.Check out atof.
*/


/*
#include <stdio.h>
pswap(int* x, int* y);
int main(int argc, char* argv[])
{
	int x = 10;
	int y = 5;
	pswap(&x, &y);

	printf("X: %d Y:%d", x , y);
}
pswap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
*/
#include <stdio.h>
#include <ctype.h>

int swap(int* x, int* y);

int main(int argc, char* argv[])
{
	int x = 5;
	int y = 10;
	int i = 0;
	swap(&x,&y);

	printf("X = %d Y = %d", x,y);

	FILE* file = fopen("deeznuts", "r");

	int myarray[] = {1,2,3,4,5};
	int length = sizeof(myarray) / sizeof(int);
	for (i = 0; i < length; i++)
	{
		printf("%d", myarray[i]);
	}
	
	//pointer is the value at any given address

	fclose(file);


}
int swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

