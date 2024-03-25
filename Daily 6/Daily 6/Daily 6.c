#include <stdio.h>

/***********************************************
Author: Maxim Simakoff
Date: 9/18/23
Answer to question: The problem begins counting down and 
stops approx. in 496,000's after you run the program multiple times 
and never begins counting up function.
This result is "Stack Overflow"
***********************************************/

void recursive_down_to_zero(int n)
{
	if (n >= 0)
	{
		printf("%d\n", n);
		recursive_down_to_zero(n - 1);
	}

	return;
}

void recursive_up_to_int(int n)
{
	if (n >= 0)
	{
		recursive_up_to_int(n - 1);
		printf("%d\n", n);
	}

}
int main(int argc, char* argv[])
{
	recursive_down_to_zero(500000);

	printf("*****\n");
	recursive_up_to_int(500000);
	return 0;
}




/*
		CLASS NOTES


#include <stdio.h>


void count_backwards_from_n(int n)
{
	if (n>0)
	{
		printf("the value of x is %d\n", n);
		count_backwards_from_n(n - 1);
	}
	
	return;
}

void count_up_to_n(int n)
{
	if (n >= 0)
	{
		count_up_to_n(n - 1);
		printf("the value of x is %d\n", n);
	}

}
int main(int argc, char* argv[])
{
	count_backwards_from_n(10);

	printf("*****\n");
	count_up_to_n(10);
	return 0;
}


int main(int argc, char* argv[])
{
	int number = 12;
	number = 107;

	if (number < 100)
	{
		printf("Number is less than 100:\n");
	}
	else 
	{
		printf("Number is NOT less than 100:\n");
	}

	return 0;
}
*/