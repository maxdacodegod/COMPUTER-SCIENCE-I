#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h> 
#include <malloc.h>

//Write a function pair_some find where [i] + [i+1] > 10

int pair_some(double a[10]);

int main(int argc, char* argv[])
{
	double a[10] = {1.2, 2.1, 3.3, 9.5, 1.5, 7.9, 5.4, 8.7, 9.9, 1.0};
	int index = pair_some(a);
	printf("Index %d", index);
	return 0;
}

int pair_some(double a[10])
{
	int i = 0;
	while ((a[i] + a[i + 1]) <= 10 && i < 9)
	{
		i++;
	}
	return i;
}