#include <stdio.h>


void smile(void)
{
	printf("  **** \n");
	printf(" * . . *\n");
	printf("*       *\n");
	printf("*  \\_/  *\n");
	printf(" *     *\n");
	printf("  ****");
	return;
}


int main(int argc, char* argv[])
{
	smile();
	printf("\n\n");
	smile();
	printf("\n\n");
	smile();
	return 0;
}

 


/*

		CLASS NOTES
	
int main(int argc, char* argv[])
{
	printf("Hello from main!\n");
	joe();
	return 0;
}

void joe(void)
{
	printf("Hello from Joe!\n");
	joe();
	return;
}
*/
