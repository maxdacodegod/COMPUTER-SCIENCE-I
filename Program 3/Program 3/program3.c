/*
 Author: Maxim Simakoff
 Course: COMP1010, Computing I
 Date: 11/29/23
 Description: This program takes the input from the user in the quiz.txt file of 10 names formatted
 by First Name Last name and then 0-10 grades that range from 0% - 100%. The program produces a table output
 which states the Last name, First Name, then the grades the students recieved (If they didn't take a quiz
 it just fills it with 0) and then outputs the average all the way on the right.
 After this process is complete it copies the output file back into the input file.
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
//NAMES
char* read_string(FILE* fp, char buffer[], int size);
//GRADES
char* read_grades(FILE* fp, int buffer[], int size);

int main(int argc, char* argv[])
{
	FILE* input = fopen("quiz.txt", "r");
	FILE* output = fopen("average.txt", "w");

	char firstname[20];
	char lastname[20];
	int grades[20];
	int i;
	int sum_of_grades = 0;
	if (input == NULL)
	{
		printf("FAILED TO OPEN FILE FOR READING! ");
		exit(1);
	}
	if (output == NULL)
	{
		printf("FAILED TO OPEN FILE FOR WRITING! ");
		exit(1);
	}

	int width = 1;
	fprintf(output, "Last,First\t\t\t");
	while (width <= 10)
	{
		fprintf(output, "%4d ", width);
		width++;
	}
	fprintf(output, " Average\n");
	fprintf(output, "******************************************************************************\n");


	while (read_string(input, firstname, 20) && read_string(input, lastname, 20) && read_grades(input, grades, 20))
	{
		sum_of_grades = 0;

		char fullname[40];
		int j = 0;
		int x = 0;
		int a = 0;
		int zero = 0;
		while (lastname[j] != '\0')
		{
			fullname[x] = lastname[j];
			x++;
			j++;
		}

		fullname[x] = ',';
		x++;

		j = 0;
		while (firstname[j] != '\0')
		{
			fullname[x] = firstname[j];
			x++;
			j++;
		}
		fullname[x] = '\0';

		fprintf(output, "%-20s", fullname);

		for (i = 0; i < sizeof(grades) / sizeof(grades[0]) && grades[i] != '\0'; i++)
		{
			fprintf(output,"%4d ", grades[i]);
			sum_of_grades += grades[i];
			a++;
		}
		while (grades[i] == '\0' && a<10)
		{
			fprintf(output,"%4d ", zero);
			a++;
		}
		fprintf(output, " * %.2f\n", (double)sum_of_grades / 10);
	}

	fclose(input);
	fclose(output);

	FILE* output_reading = fopen("average.txt", "r");

	if (output_reading == NULL) 
	{
		printf("FAILED TO OPEN FILE FOR READING! ");
		exit(1);
	}

	FILE* input_writing = fopen("quiz.txt", "w");
	if (input_writing == NULL) 
	{
		printf("FAILED TO OPEN FILE FOR WRITING! ");
		exit(1);
	}

	int character;
	while ((character = fgetc(output_reading)) != EOF) 
	{
		fputc(character, input_writing);
	}

	fclose(input_writing);
	fclose(output_reading);
	return 0;
}

char* read_string(FILE* fp, char buffer[], int size)
{
	int character;
	int i = 0;

	if (size < 2 || fp == NULL)
	{
		return NULL;
	}

	while ((character = fgetc(fp)) != EOF && !isalpha(character))
	{
		//Skip any digits
	}

	if (character == EOF)
	{
		return NULL;  
	}

	buffer[i] = character;
	i++;

	while ((character = fgetc(fp)) != EOF && !isspace(character) && i < size - 1)
	{
			buffer[i] = character;
			i++;
	}
	if (character != EOF)
	{
		ungetc(character, fp);
	}
	buffer[i] = '\0';
	return buffer;
}

char* read_grades(FILE* fp, int buffer[], int size)
{
	int i = 0;
	int grade;

	if (size < 1 || fp == NULL || buffer == NULL)
	{
		return NULL;
	}

	while (fscanf(fp, "%d", &grade) == 1 && i < size - 1 )
	{
		buffer[i] = grade;
		i++;
		if (fgetc(fp) == '\n') 
		{
			break;
		}
	}

	buffer[i] = '\0';
	return buffer;
}
