//63)
// Write a complete program that will ask the user for two values of type double and 
// then print the average on the screen with a message that says whether the average 
// is a positive number or a negative number.
/*
#include <stdio.h>
void clear_keyboard_buffer(void);

int main(int argc, char* argv[])
{
	double number_1;
	double number_2;
	double average;

	printf("Please enter the first number: \n");
	scanf(" %lf", &number_1);
	clear_keyboard_buffer();
	printf("Please enter the Second number: \n");
	scanf(" %lf", &number_2);
	
	average = (number_1 + number_2) / 2.0;

	printf("AVG is %.2f \n", average);

	if (average >= 0)
	{
		printf("The AVG %.2f is positive", average);
	}
	else if (average < 0)
	{
		printf("The AVG %.2f is negative", average);
	}
	return 0;
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

//65)
// Write the section of code required to print the integers 
// from - 100 to positive 100 on the screen including the endpoints 
// where one number is printed per line.
// You may assume you have all required include directives
/*
#include <stdio.h>

int main(int argc, char* argv[])
{
	int x = -100;
	for (int i = 0; i <= 200; i++)
	{
		
		printf("%d \n", x);
		x++;
	}
	return 0;
}
*/

//69)
// Write the section of code required to print the sum of the first n 
// integers(starting with 1)
// where n is a positive number entered from the keyboard by the user.
// You may assume you have all required include directives and
// that the user will not enter a negative number.
/*
#include <stdio.h>
int main(int argc, char* argv[])
{
	int num;
	int sum = 0;
	printf("Enter a Positive Integer: ");
	scanf("%d", &num);
	for (int i = 1 ; i <= num; i++)
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
	return 0;
}
*/
