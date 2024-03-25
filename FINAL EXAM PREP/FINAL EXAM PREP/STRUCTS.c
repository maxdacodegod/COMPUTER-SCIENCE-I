// Declare a structure, typedef, declare and initialize it, pass to function.
// Month Day Year

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h> 
#include <malloc.h>

struct dates
{
	int month;
	int year;
	int day;
};

typedef struct dates Dates;

int main(int argc, char* argv[])
{
	Dates firstdate = {12, 2024, 22};
	displayDate(firstdate);
	return 0;
}

void displayDate(Dates date)
{
	printf("%d month, %d day, %d year", date.month, date.day, date.year);
}
/****************************************************************************************/
