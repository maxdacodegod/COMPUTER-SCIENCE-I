#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h> 
#include <malloc.h>
/* DYNAMIC MEMORY ALLOCATION*/
/* 2 Part Problem, Creating DYNAMIC Memory Allocation, then using stuff with arrays.*/

int get_max(int myarr[], int n);

int main(int argc, char* argv[])
{
	int* p;
	int n = 0;
	int i = 0;
	printf("Please enter the amount of numbers wanting to be stored: ");
	scanf("%d", &n);

	p = (int*)malloc(sizeof(int) * n);

		if (p == NULL)
		{
			printf("Failed");
			exit(1);
		}
		srand(time(NULL));
		// Generate and store random numbers in the array
		for (i = 0; i < n; i++) 
		{
			p[i] = rand();
		}
		printf("Largest random number is %d", get_max(p, n));

	free(p);
	return 0;
}

int get_max(int myarr[], int n)
{
	int max_index;
	for (int i = 1; i < n; i++) 
	{
		if (myarr[i] > myarr[max_index]) 
		{
			max_index = i;
		}
	}
	return max_index;
}
/*********************************************************************************************/