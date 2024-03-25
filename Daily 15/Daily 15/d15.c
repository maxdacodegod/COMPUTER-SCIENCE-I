/***********************************************
Author: Maxim Simakoff
Date: 10/30/23
Purpose: The program asks the user which conversion they would like to do, either weight or length.
Then asks the user which specific conversion they would like to do, metric to US etc. There are currently
no conversions occuring.
Sources of Help: Daily assignments and class notes as reference.
Time Spent: Roughly 15-20 minutes
***********************************************/

#include <stdio.h>

int choices();
int user_wishes_to_continue(void);
void clear_keyboard_buffer(void);
void convert_lengths(void);
void convert_weights(void);

void length_to_metric(void);
void length_to_us(void);

void weight_to_metric(void);
void weight_to_us(void);

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
		default:
			printf("Invalid choice. Please enter a valid option.\n"); 
			break;
		}
		if (user_wishes_to_continue() == 0)
		{
			return 0;
		}
	}
}

int choices()
{
	int choice;
	int validInput; 

	do
	{
		printf("Please choose from the following options: \n"); 
		printf("0) Quit \n");
		printf("1) Lengths \n");
		printf("2) Weights\n");
		validInput = scanf(" %d", &choice);
		if (!validInput || (choice < 0 || choice > 2))
		{
			printf("Invalid input. Please enter a valid number.\n");
			clear_keyboard_buffer();
		}
	} while (!validInput || (choice < 0 || choice > 2));

	printf("\nYour choice: %d\n", choice);

	return choice;
}

int user_wishes_to_continue(void)
{
	char answer;

	do {
		printf("Do you wish to continue? (y/n): ");
		scanf(" %c", &answer);
		clear_keyboard_buffer();

		if (answer == 'n' || answer == 'N') {
			return 0;
		}
		else if (answer == 'y' || answer == 'Y') {
			return 1;
		}
		else {
			printf("I'm sorry, I don't understand.\n");
		}
	} while (1);

}
void convert_lengths(void)
{
	int length_choice;
	do
	{
		printf("Please choose from the following options: \n");
		printf("0) Quit \n");
		printf("1) feet/inches to meters/centimeters \n");
		printf("2) meters/centimeters to feet/inches  \n");
		if (scanf(" %d", &length_choice) != 1)
		{
			printf("Invalid input. Please enter a valid number.\n");
			clear_keyboard_buffer();  
			continue;  
		}
		clear_keyboard_buffer();  
	} while (length_choice != 0 && length_choice != 1 && length_choice != 2);

	printf("\nYour choice: %d\n", length_choice);

	if (length_choice == 1)
	{
		length_to_metric();
	}
	else if (length_choice == 2)
	{
		length_to_us();
	}
	

}
void convert_weights(void)
{
	int weight_choice;
	do
	{
		printf("Please choose from the following options: \n");
		printf("0) Quit \n");
		printf("1) pounds/ounces to kilograms/grams \n");
		printf("2) kilograms/grams to pounds/ounces  \n");
		if (scanf(" %d", &weight_choice) != 1)
		{
			printf("Invalid input. Please enter a valid number.\n");
			clear_keyboard_buffer();
			continue;
		}
		clear_keyboard_buffer();
	} while (weight_choice != 0 && weight_choice != 1 && weight_choice != 2);

	printf("\nYour choice: %d\n", weight_choice);

	if (weight_choice == 1)
	{
		weight_to_metric();
	}
	else if (weight_choice == 2)
	{
		weight_to_us();
	}

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

void length_to_metric(void)
{
	printf("User choice is length: US to metric\n");
	return 0;
}
void length_to_us(void)
{
	printf("User choice is length: Metric to US\n");
	return 0;
}
void weight_to_metric(void)
{
	printf("User choice is weight: US to metric\n");
	return 0;
}
void weight_to_us(void)
{
	printf("User choice is weight: Metric to US\n");
	return 0;
}

/******************************/
/*
void get_length_to_metric(int* pFeet, double* pInches);
void calculate_length_to_metric(int feet, double inches, int* pMeters, double* p_cm);
void output_length_to_metric(int feet, double inches, int meters, double cm);
const double INCHES_TO_FEET = 1 / 12.0;
const double FEET_TO_METERS = ;
const double METERS_TO_CM = ;

void length_conversion_to_metric(void)
{
	int feet;
	double inches;
	int meters;
	double cm;
	get_length_to_metric(&feet, &inches);
	calculate_length_to_metric(feet,inches,&meters, &cm);
	output_length_to_metric(feet, inches, meters, cm);

}

void get_length_to_metric(int* pFeet, double* pInches)
{
	*pFeet = 5;
	*pInches = 6.789;
}
void calculate_length_to_metric(int feet, double inches, int* pMeters, double* p_cm)
{
	
	double total_feet = feet + inches * INCHES_TO_FEET;
	double total_meters = total_feet * FEET_TO_METERS;
	*pMeters = floor(total_meters);
	*p_cm = (total_meters - *pMeters) * METERS_TO_CM;
}
void output_length_to_metric(int feet, double inches, int meters, double cm)
{
	printf("%d feet and %f inches converts to \n", feet, inches);
	printf("%d meters and %f cm\n", meters, cm);
}

*/