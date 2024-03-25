// 52)
// Write a function declaration and a complete function definition for a function 
// named validate that will accept three parameters of type double and 
// return 1 (true) if all parameters have values in the range between 25 and
// 55, including the end points, and 0 (false) otherwise.

/*
int Validate(double num1, double num2, double num3)
{
	if ((num1 >= 25 && num1 <= 55) && (num2 >= 25 && num2 <= 55) && (num3 >= 25 && num3 <= 55))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
*/

// 56)
// Write a function declaration and a complete function definition for a function 
// named multiply that returns the product of two parameters of type double.

/*
double multiply(double num1, double num2)
{
	return num1 * num2;
}
*/

// 60)
// Write a complete program that uses a function named get_value to ask the user to 
// enter a positive number.The function should return the number the users enter but 
// should not allow them to enter negative numbers or zero. The program should use 
// the function twice to get two values from the user and output their sum. 
// User values will be of type double.
/*
#include <stdio.h>
double get_value(void);  

int main(int argc, char* argv[])
{
    double num1, num2;

   
    num1 = get_value();
    num2 = get_value();

    double sum = num1 + num2;
    printf("The sum of %.2f and %.2f is %.2f\n", num1, num2, sum);

    return 0;
}

double get_value(void)
{
    double num = 0;

    while (num <= 0) {  
        printf("Please enter a positive number: ");
        scanf("%lf", &num); 
        clear_keyboard_buffer();
    }

    return num;
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
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

enum stuff {BREH, THING, DUDE};
void dosomething(void);

int main(int argc, char* argv[])
{
	int x;
	int y;
	printf("Please enter a number: ");
	scanf("%d", &x);
	printf("Please enter number 2: ");
	scanf("%d", &y);
	if (x >= y)
	{
		for (int i = 0; i < 100; i++)
		{
			x++;
			y++;
		}
	}
	do
	{
		x++;
		y++;
	} while (x == y);

	while (x <= y)
	{
		++x;
		y++;
	}

	switch (x) {
	case 5:
		break;
	default:
		x++;
		break;
	}
	return 0;
}

void dosomething(void)
{
	int sum;
	sum = 1 + 1;
}

int main(int argc, char* argv[])
{
int x;
int y;
while(x>y)
{

}
return 0;
}
*/