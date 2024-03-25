// 52)
// Write a complete program that will ask the user for two integers and the 
// sum of those two integers.It will then print "Correct!" on the screen if their 
// sum was correct and "Incorrect" otherwise. The program should continue
// asking for new sets of integers for as long as the user wishes.

/*
#include <stdio.h>

int main(int argc, char* argv[])
{
	while (1)
	{
	int num1 = 0;
	int num2 = 0;
	printf("Enter the First integer: ");
	scanf(" %d", &num1);
	printf("Enter the Second integer: ");
	scanf(" %d", &num2);

		if (num1 != 0 && num2 != 0)
		{
			printf("Correct\n");
		}
		else
		{
			printf("Incorrect\n");
		}

	}
	return 0;
}
*/

// 54)
// Write a complete program that will ask the user for the current temperature.
// The program should print a message on the screen indicating that it is too 
// hot if the temperature is above 80, too cold if it is below 60 and
// just right if the temperature is in the middle. Can this program be done using 
// a switch statement, why or why not?
/*
#include <stdio.h>

int main(int argc, char* argv[])
{
	int temp;
	printf("Print the current temperature: ");
	scanf(" %d", &temp);
	if (temp > 80)
	{
		printf("Hot");
	}
	else if(temp < 60)
	{
		printf("Cold");
	}
	else 
	{
		printf("Just Right");
	}
	return 0;
}


// In short you can convert to switch but you would have to write out all the cases.
*/