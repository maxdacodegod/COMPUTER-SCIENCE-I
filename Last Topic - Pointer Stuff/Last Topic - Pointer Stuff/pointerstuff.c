/* 

				Object Orientated Programming
	Instead of learning tools, learning techniques. Writing code that is good.

*/

#include <stdio.h>
#include <stdlib.h>
#include "date.h" // Interface File, explains how to interact with the object

int main(int argc, char* argv[])
{
	DATE hToday; // This variable can store something, without knowing type.
	
	hToday = date_init_default();
	if (hToday == NULL)
	{
		printf("Failed to allocate space for date object.\n");
		exit(1);
	}

	date_output(hToday);	
	printf("\n");
	printf("The month name is %s", date_get_month_name(hToday));

	date_destroy(&hToday);
	return 0;
}

// Pointer without context is a handle "void*"
// FILE* is actually void*, it is an opaque object 

//Discoverable Attribute, "Month integer 12 is Decemeber, doesnt print it but we discover it."

// Dynamic Memory Managment: Malloc(); and Free();

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char* argv[])
//{
//	int* p;
//	int x;
//	for (;;)
//	{
//		p = (int*)malloc(sizeof(int));
//		if (p == NULL)
//		{
//			printf("Failed to Allocated space for one single integer...\n");
//			exit(1);
//		}
//	}
//	//p[0] = 42;
//	//p[1] = 300;
//
//	scanf("%d", &x);
//
//	//for (;;)
//	//{
//	//	p = malloc(4); //First book in
//	//	*p = 42;
//	//	free(p);
//	//}
//
//	return 0;
//}
// Dynamic Variables - Allocated at run time, when we ask for them, and deallocated by us
// malloc() - Memory Allocation - Inside stdlib.h library
// Memory Leak
// When a program terminates, memory leak will recover