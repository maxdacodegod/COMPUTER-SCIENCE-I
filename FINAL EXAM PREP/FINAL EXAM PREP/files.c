// Create a File Pointer, read from file etc.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h> 
#include <malloc.h>

int main(int argc, char* argv[])
{
	FILE* fp = fopen("x.txt", "r");
	int i = 0;
	int n;
	int myarr[50];
	while (fp != NULL && fp != EOF)
	{
		fscanf(fp, "%d", &n);
		myarr[i] = n;
		i++;
	}
	fclose(fp);
}