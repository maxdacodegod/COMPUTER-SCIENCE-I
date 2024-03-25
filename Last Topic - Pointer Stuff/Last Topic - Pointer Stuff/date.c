#include <stdio.h>
#include "date.h"
#include <stdlib.h>

struct date //Known Type
{
	int day;
	int month;
	int year;
};

typedef struct date Date;

DATE date_init_default(void)
{
	Date* pDate = (Date*)malloc(sizeof(Date));
	if (pDate != NULL)
	{
		pDate->month = 1;
		pDate->day = 1;
		pDate->year = 1970;
	}
	return (DATE)pDate;
}
int date_get_month(DATE hDate)
{
	Date* pDate = (Date*)hDate;	//Casting to the Known Type
	return pDate->month;
}
int date_get_day(DATE hDate)
{
	Date* pDate = (Date*)hDate;	//Casting to the Known Type
	return pDate->day;
}
int date_get_year(DATE hDate)
{
	Date* pDate = (Date*)hDate;	//Casting to the Known Type
	return pDate->year;
}
//These 3 are ACCESSOR functions


char* date_get_month_name(DATE hDate)	//Discoverable Attribute Function
{
	Date* pDate = (Date*)hDate;	//Casting to the Known Type
	switch (pDate->month)
	{
	case 1:
		return "January";
	case 2:
		return "February";
	case 3:
		return "March";
	case 12:
		return "December";
	default:
		return "name not made yet";
	}


}

Status date_set_month(DATE hDate, int month)
{
	Date* pDate = (Date*)hDate;	//Casting to the Known Type
	if (month < 1 || month > 12)
	{
		return FAILURE;
	}
	pDate->month = month;
	return SUCCESS;

}
Status date_set_day(DATE hDate, int day)
{
	Date* pDate = (Date*)hDate;	//Casting to the Known Type
	if (day < 1 || day > 31)
	{
		return FAILURE;
	}
	pDate->day = day;
	return SUCCESS;

}
Status date_set_year(DATE hDate, int year)
{
	Date* pDate = (Date*)hDate;	//Casting to the Known Type
	if (year < 1970 || year > 2024)
	{
		return FAILURE;
	}
	pDate->year = year;
	return SUCCESS;
}



void date_ouput(DATE hDate)
{
	Date* pDate;
	pDate = (Date*)hDate;
	printf("%d/%d/%d", pDate->month, pDate->day, pDate->year);
}

void date_destroy(DATE* phDate)
{
	Date* pDate = (Date*)*phDate;
	//have the object clean up anything that it is responsible for.
	//clean up memory footprint of the object
	free(pDate);
	*phDate = NULL; //Avoids Dangling Pointer
}