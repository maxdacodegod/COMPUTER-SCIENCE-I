#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void myfunc(char name[]);

char* read_string(FILE* fp, char buffer[], int size);
void combine_names(char firstname[], char lastname[], char fullname[], int size);

int main(int argc, char* argv[])
{
	FILE* fp;
	int number;
	int noc;
	int sum = 0;
	int c;
	char firstname[21];
	char lastname[21];
	char fullname[21];


	fp = fopen("numbers1.txt", "r");
	
	if (fp == NULL)
	{
		printf("FAILED TO OPEN FILE FOR READING! ");
		exit(1);
	}

	while (read_string(fp, firstname, 21))
	{
		read_string(fp, lastname, 21);
		combine_names(firstname, lastname,fullname, 21);
		printf("%-20s********\n", fullname);
	}

	fclose(fp);
	return 0;
}
void combine_names(char firstname[], char lastname[], char fullname[], int size)
{
	int i = 0;
	int j = 0;
	while (firstname[i] != '\0' && i < size - 1)
	{
		fullname[i] = firstname[i];
		i++;
	}
	if (i < size - 1)
	{
		fullname[i] = ' ';
		i++;
	}
	while (lastname[j] != '\0' && i < size - 1)
	{
		fullname[i] = lastname[j];
		i++;
		j++;
	}
	fullname[i] = '\0';
}

void myfunc(char name[])
{
	int i = 0;
	while (name[i] != '\0')
	{
		printf("%s", name[i]);
		i++;
	}
}
char* read_string(FILE* fp, char buffer[], int size)
{
	char c;
	int character;
	int noc;
	int i = 0;
	if (size < 2)
	{
		return NULL;
	}
	noc = fscanf(fp," %c", &c);
	if (noc == EOF)
	{
		return NULL;
	}
	buffer[i] = c;
	i++;

	character = fgetc(fp);
	while (character != EOF && !isspace(character) && i < size - 1)
	{
		buffer[i] = character;
		i++;
		character = fgetc(fp);
	}
	if (character != EOF)
	{
		ungetc(character, fp);
	}
	
	buffer[i] = '\0';
	return buffer;

}
	//character arrays are NULL terminated
	//noc = fscanf(fp, "%c", &c);
	//while (noc == 1)
	//{
	//	if (noc == 1)
	//	{
	//		printf("%d \n", number);
	//		sum += number;
	//	}
	//	else
	//	{
	//		fscanf(fp, "%c", &c);
	//	}
	//	printf("%c : ", toupper(c));
	//	if (isalpha(c)) // Boolean if c is a letter
	//	{
	//		printf(" is Alphabetical");
	//	}
	//	if (isupper(c))
	//	{
	//		printf(" and this is upper case");
	//	}
	//	if (islower(c))
	//	{
	//		printf(" and this is lower case");
	//	}
	//	if (isspace(c))
	//	{
	//		printf(" and this is a space character");
	//	}
	//	if (ispunct(c))
	//	{
	//		printf(" and this is a punctuation character");
	//	}
	//	if (isdigit(c))
	//	{
	//		ungetc(c, fp);
	//		fscanf(fp, "%d", &number);
	//		sum += number;
	//		printf(" got the number %d", number);
	//	}
	//	printf("\n");
	//	noc = fscanf(fp, "%c", &c);
	//}

	//printf("The sum is %d", sum);
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE* fp;

	//system("DIR");

	char c;
	int i;
	int n;
	int noc = 1;
	int sum = 0;

	fp = fopen("numbers1.txt", "r");
	if (fp == NULL)
	{
		printf("File Did not run! \n");
		exit(1);
	}
	noc = fscanf(fp, "%d", &n); //Try
	while(noc == 1) //CHECK
	{	
			printf("%d\n", n); //DO
			sum += n;
			noc = fscanf(fp, "%d", &n); //Try
	}
	printf("The sum of all the numbers is %d \n", sum);
	//fp = fopen("main.c", "w");
	//That will redo main

	//fprintf(fp, "Hello Class! \n");
	fclose(fp);
	return 0;
}
// Our perseption of a file is completely based on the program that uses it

//GET THE TOP TWO, check both files, see if they are less than or more than


// [ n * (n+1) ] / 2
*/