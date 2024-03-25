/*
	Author: Maxim Simakoff
	Date: 9/8/2023

	Output: 

	I found that the program runs through and appears to shows me the executbale name with my folder and file name in it!

	Program Output:
	This program has the exectuble name: C:\COMP010\DAILY 2\x64\Debug\Day 2.exe
	That is all!

	C:\COMP010\DAILY 2\x64\Debug\Day 2.exe (process 25948) exited with code 0.
	Press any key to close this window . . .

*/

#include <stdio.h>

int main(int argc, char* argv[])
{
	printf("This program has the exectuble name: %s \n", argv[0]);
	printf("That is all! \n");
	return 0;
}