/***********************************************
Author: Maxim Simakoff
Date: 10/30/2023
Purpose: The program asks the user if they want to convert lengths or widths, then calls the convert 
functions.
Sources of Help: Previous class notes
Time Spent: 45 min
***********************************************/
#include <stdio.h>

int choices();
void clear_keyboard_buffer(void);
void convert_lengths(void);
void convert_weights(void);

int main(int argc, char* argv[])
{
	
	while (1)
	{
		int choice = choices();

		switch (choice)
		{
		case 0:
			return 0;
		case 1:
			convert_lengths();
			break;
		case 2:
			convert_weights();
			break;
		}
	} 
}

int choices()
{
	int choice;
	do
	{
		printf("Please choose from the following options: \n");
		printf("0) Quit \n");
		printf("1) Lengths \n");
		printf("2) Weights\n");
		scanf(" %d", &choice);
	} while (choice != 0 && choice != 1 && choice != 2);

	printf("\nYour choice: %d\n", choice);

	return choice;
}
void convert_lengths(void)
{
	printf("Converting Lengths...\n");
}
void convert_weights(void)
{
	printf("Converting Weights...\n");
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



/*
			CLASS NOTES
#include <stdio.h>

void do_a_conversion(void);
int user_wishes_to_continue(void);
void clear_keyboard_buffer(void);

enum direction {F_TO_C, C_TO_F, QUIT};
typedef enum direction Direction;


void do_a_conversion_f_to_c(void);
void do_a_conversion_c_to_f(void);

void display_direction_choices(void);

double get_temperature(void);
double convert_f_to_c(double degrees_fahrenheit);
display_f_to_c(double degrees_fahrenheit, double degrees_celsius);

double convert_c_to_f(double degrees_celsius);
void display_c_to_f(double degrees_celsius, double degrees_fahrenheit);

int main(int argc, char* argv[])
{
	do 
	{
		do_a_conversion();
	} while (user_wishes_to_continue());
	
	return 0;
}
void do_a_conversion(void)
{
	Direction direction;	
	do {
		direction = get_direction();

		switch (direction)
		{
		case F_TO_C:
			do_a_conversion_f_to_c();
			break;
		case C_TO_F:
			do_a_conversion_c_to_f();
			break;
		case QUIT:
			printf("Have a great day!");
		}
	} while (direction != QUIT);
}

int user_wishes_to_continue(void)
{
	char answer;
	//Ask if the user wishes to continue
	printf("Do you wish to continue? (y/n): ");
	scanf(" %c", &answer);
	clear_keyboard_buffer();
	//Verify their input
	while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
	{
		printf("Im sorry I dont understand.\n");
		printf("Do you wish to continue? (y/n): \n");
	}
	return answer == 'y' || answer == 'Y';
	//return there result
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

Direction get_direction(void)
{
	char choice;
	do
	{
		display_direction_choices();
		scanf(" %c", &choice);
		clear_keyboard_buffer();
		if (choice != '1' && choice != '2' && choice != '0') {
			printf("Im Sorry I do not understand.\n");
		}
	} while (choice != '1' && choice != '2' && choice != '0');

	switch (choice)
	{
	case '1':
		return F_TO_C;
	case '2':
		return C_TO_F;
	}
	return QUIT;
}
void do_a_conversion_f_to_c(void)
{
	double degrees_fahrenheit;
	double degrees_celsius;
	printf("Please enter the temp in degrees Fahrenheit.\n");
	degrees_fahrenheit = get_temperature(F_TO_C);
	degrees_celsius = convert_f_to_c(degrees_fahrenheit);
	display_f_to_c(degrees_fahrenheit, degrees_celsius);
}
void do_a_conversion_c_to_f(void)
{
	double degrees_celsius;
	double degrees_fahrenheit;
	printf("Please enter the temperature in degrees celsius.\n");
	degrees_celsius = get_temperature();
	degrees_fahrenheit = convert_c_to_f(degrees_celsius);
	display_c_to_f(degrees_celsius, degrees_fahrenheit);

}
void display_direction_choices(void)
{
	printf("Please choose from the following options: \n");
	printf("1) Convert from Fahrenheit to Celsius \n");
	printf("2) Convert from Celsius to Fahrenheit\n");
	printf("0) Quit \n");
	printf("\nYour choice: ");
}

double get_temperature(void)
{
	double temperature;
	printf("Temperature: ");
	scanf("%lf", &temperature);
	return temperature;
}
double convert_f_to_c(double degrees_fahrenheit)
{
	//(degrees_fahrenheit - 32) * 5.0 / 9.0;
	return (degrees_fahrenheit - 32) * 5.0 / 9.0;
}
display_f_to_c(double degrees_fahrenheit, double degrees_celsius)
{
	printf("%g degrees Fahrenheit converts to\n", degrees_fahrenheit);	
	printf("%g degrees celsius\n\n", degrees_celsius);
}
double convert_c_to_f(double degrees_celsius)
{
	return degrees_celsius * 9.0 / 5.0 +32;
}
void display_c_to_f(double degrees_celsius, double degrees_fahrenheit)
{
	printf("%g degrees Celsius converts to\n", degrees_celsius);
	printf("%g degrees Fahrenheit\n\n", degrees_fahrenheit);
}
*/
// Dereference - You take a map and you go to the place it leads you to.
// Address refers to something.
// Treasure is a variable (integer)
// Map said look there (Address of integer)
// Map is the address of the integer.
// Map is REFFERING to the ADDRESS of the treasure.
// Map -> Map -> Map -> Treasure
// Address of the address of an integer. Derefernce strips off 1 address of.
// Concept - Indirection. (Talking about something indirectly)
// Levels of indirection, our minds have more and more trouble getting it.
// Ex1. 2+5+2+3+4+6+7+3+4+6+5+3 = ? 
// 1 Level of indirection at a time is easy.
// Ex2. Do one at a time in first Ex1. 


// 3x+1 odd
// divide 2 if even

// Input
// Calculation
// Output

/*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


double square_root(double number);

int main(int argc, char* argv[])
{

	double x = 2.0;
	double y = 3.141592653;
	printf("%f to the 5th power is %f\n", x, pow(x,5));
	//Raise it to power
	printf("The square root of %f is %.20f\n", x, sqrt(x));
	//SQRT math function
	printf("%f\n", floor(y));
	printf("%f\n", ceil(y));
	printf("%d\n", abs(y));
	printf("%ld\n", labs(y));
	printf("%f\n", fabs(y));

	return 0;
}


// Without math.h this is the square root function
double square_root(double number)
{
	double guess = 100.0;
	double companion_number;
	int i;
	for (i = 0; i < 100; i++)
	{
		companion_number = number / guess;
		guess = (guess + companion_number) / 2.0;
		printf("Internal Guess %f\n", guess);
	}
	return guess;
}
//Babolonian Algorithm, Used to complete sqrt.
*/