/*
 Program: Conversions Daily 16
 Author: Maxim Simakoff
 Date: 11/5/23
 Time spent: 4-6 Hours Combined (Throughout the 3 dailys)
 Sources of Help: Class Notes
 Purpose: The purpose of this program is to ask the user if they want to complete 1 of the 4 conversions
 listed, once they choose a specific conversion they can input numbers and then a conversion will occur from
 either US to Metric or Metric to US. These conversions are offered in length conversions and weight conversions.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int choices();
int user_wishes_to_continue(void);
void clear_keyboard_buffer(void);
void convert_lengths(void);
void convert_weights(void);

void length_to_metric(void);
void length_to_us(void);

void weight_to_metric(void);
void weight_to_us(void);

/*******************************************/

// LENGTH US to Metric Conversions
void length_conversion_to_metric(void);
void get_length_to_metric(int* pFeet, double* pInches);
void calculate_length_to_metric(int feet, double inches, int* pMeters, double* p_cm);
void output_length_to_metric(int feet, double inches, int meters, double cm);

// LENGTH Metric to US Conversions
void length_conversion_to_us(void);
void get_length_to_us(int* pMeters, double* pCm);
void calculate_length_to_us(int meters, double cm, int* pFeet, double* pInches);
void output_length_to_us(int feet, double inches, int meters, double cm);

/******************************/
//CONVERSIONS FOR LENGTHS
// 0.3048 meters in a foot 
// 12 inches in a foot
// 100 centimeters in a meter
const double INCHES_TO_FEET = 1.0 / 12.0;
const double FEET_TO_METERS = 0.3048;
const double METERS_TO_CM = 100.0;

const double CM_TO_METERS = 1.0 / 100.0;
const double METERS_TO_FEET = 1.0 / 0.3048;
const double FEET_TO_INCHES = 12.0;

/*****************************************************************************************************/
// WEIGHT US TO Metric
void weight_conversion_to_metric(void);
void get_weight_to_metric(int* pPounds, double* pOunces);
void calculate_weight_to_metric(int pounds, double ounces, int* pKilos, double* pGrams);
void output_weight_to_metric(int pounds, double ounces, int kilos, double grams);
	
// WEIGHT Metric TO US
void weight_conversion_to_us(void);
void get_weight_to_us(int* pKilos, double* pGrams);
void calculate_weight_to_us(int kilos, double grams, int* pPounds, double* pOunces);
void output_weight_to_us(int pounds, double ounces, int kilos, double grams);

/******************************/
//CONVERSIONS FOR WEIGHTS
// 2.2046 pounds in a kilogram 
// 1000 grams in a kilogram
// 16 ounces in a pound

const double OUNCES_TO_POUNDS = 1.0 / 16.0;
const double POUNDS_TO_KILOS = 1.0 / 2.2046;
const double KILOS_TO_GRAMS = 1000.0;

const double GRAMS_TO_KILOS = 1.0 / 1000.0;
const double KILOS_TO_POUNDS = 2.2046;
const double POUNDS_TO_OUNCES = 16.0;

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
		if (user_wishes_to_continue() == 0)
		{
			return 0;
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
		scanf(" %d", &length_choice);
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
	else
	{
		return;
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
		scanf(" %d", &weight_choice);
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
	else
	{
		return;
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
	length_conversion_to_metric();
}
void length_to_us(void)
{
	printf("User choice is length: Metric to US\n");
	length_conversion_to_us();
}

void weight_to_metric(void)
{
	printf("User choice is weight: US to metric\n");
	weight_conversion_to_metric();
}
void weight_to_us(void)
{
	printf("User choice is weight: Metric to US\n");
	weight_conversion_to_us();
}

/******************************/
// LENGTH US To Metric
void length_conversion_to_metric(void)
{
	int feet;
	double inches;
	int meters;
	double cm;
	get_length_to_metric(&feet, &inches);
	calculate_length_to_metric(feet, inches, &meters, &cm);
	output_length_to_metric(feet, inches, meters, cm);
}
void get_length_to_metric(int* pFeet, double* pInches)
{
	printf("How many Feet: ");
	scanf(" %d", pFeet);
	
	printf("How many Inches: ");
	scanf(" %lf", pInches);
	
}
void calculate_length_to_metric(int feet, double inches, int* pMeters, double* p_cm)
{
	double total_feet = (double) feet + (inches * INCHES_TO_FEET);
	double total_meters = total_feet * FEET_TO_METERS;
	*pMeters = floor (total_meters);
	*p_cm = (total_meters - *pMeters) * METERS_TO_CM;
}
void output_length_to_metric(int feet, double inches, int meters, double cm)
{
	printf("\n\n");
	printf("%d feet and %.2f inches converts to \n", feet, inches);
	printf("%d meters and %.2f cm\n", meters, cm);
}
/******************************/
// LENGTH Metric TO US
void length_conversion_to_us(void)
{
	int meters;
	double cm;
	int feet;
	double inches;
	get_length_to_us(&meters, &cm);
	calculate_length_to_us(meters, cm, &feet, &inches);
	output_length_to_us(feet, inches, meters, cm);
}
void get_length_to_us(int* pMeters, double* pCm)
{
	printf("How many Meters: ");
	scanf(" %d", pMeters);

	printf("How many CM: ");
	scanf(" %lf", pCm);
}
void calculate_length_to_us(int meters, double cm, int* pFeet, double* pInches)
{
	double total_meters = (double) meters + (cm * CM_TO_METERS);
	double total_feet = total_meters * METERS_TO_FEET;
	*pFeet = floor(total_feet);
	*pInches = (total_feet - *pFeet) * FEET_TO_INCHES;
}
void output_length_to_us(int feet, double inches, int meters, double cm)
{
	printf("\n\n");
	printf("%d meters and %.2f cm converts to \n", meters, cm);
	printf("%d feet and %.2f inches\n", feet, inches);
}

/******************************/
// WEIGHT US TO Metric
void weight_conversion_to_metric(void)
{
	int pounds;
	double ounces;
	int kilos;
	double grams;
	get_weight_to_metric(&pounds, &ounces);
	calculate_weight_to_metric(pounds, ounces, &kilos, &grams);
	output_weight_to_metric(pounds, ounces, kilos, grams);
}
void get_weight_to_metric(int* pPounds, double* pOunces)
{
	printf("How many Pounds: ");
	scanf(" %d", pPounds);

	printf("How many Ounces: ");
	scanf(" %lf", pOunces);
}
void calculate_weight_to_metric(int pounds, double ounces, int* pKilos, double* pGrams)
{
	double total_pounds = (double) pounds + (ounces * OUNCES_TO_POUNDS);
	double total_kilos = total_pounds * POUNDS_TO_KILOS;
	*pKilos = floor(total_kilos);
	*pGrams = (total_kilos - *pKilos) * KILOS_TO_GRAMS;
}
void output_weight_to_metric(int pounds, double ounces, int kilos, double grams)
{
	printf("\n\n");
	printf("%d pounds and %.2f ounces converts to \n", pounds, ounces);
	printf("%d kilos and %.2f grams\n", kilos, grams);
}
/******************************/
// WEIGHT Metric TO US
void weight_conversion_to_us(void)
{
	int kilos;
	double grams;
	int pounds;
	double ounces;
	get_weight_to_us(&kilos, &grams);
	calculate_weight_to_us(kilos, grams, &pounds, &ounces);
	output_weight_to_us(pounds, ounces, kilos, grams);
}
void get_weight_to_us(int* pKilos, double* pGrams)
{
	printf("How many Kilos: ");
	scanf(" %d", pKilos);

	printf("How many Grams: ");
	scanf(" %lf", pGrams);
}
void calculate_weight_to_us(int kilos, double grams, int* pPounds, double* pOunces)
{
	double total_kilos = (double) kilos + (grams * GRAMS_TO_KILOS);
	double total_pounds = total_kilos * KILOS_TO_POUNDS;
	*pPounds = floor(total_pounds);
	*pOunces = (total_pounds - *pPounds) * POUNDS_TO_OUNCES;
}
void output_weight_to_us(int pounds, double ounces, int kilos, double grams)
{
	printf("\n\n");
	printf("%d kilos and %.2f grams converts to \n", kilos, grams);
	printf("%d pounds and %.2f ounces\n", pounds, ounces);
}

/*		CLASS NOTES
 
#include <stdio.h>

int main(int argc, char* argv[])
{
	int a = 7;
	int b = 11; 
	int c = 42;
	
	int* p = &b;

	for (int i = 0; i < 10; i++)
	{
		printf("%d: %d %d\n", i, *(p+i), p[i]);
	}
	*(p + 8) = 101;
	printf("the value of c is %d", c);
	return 0;
}
// * - Dereference
// General Dereference []
// [] Does not mean arrays, means General Dereference

// address [index] = * (address + index)
// Array is a continuous segment of Memory
//
*/