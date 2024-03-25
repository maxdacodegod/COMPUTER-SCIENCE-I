/***********************************************
Author: Maxim Simakoff
Date: 11/29/23
Purpose: The purpose of this program is for a user to enter a weight and a time(days) and then a fibonacci
sequence will occur but on every FIFTH day. The user at the end of the program can see there original
input, the original days input, as well as the final output.
Time Spent: 1hr 30 min
***********************************************/
#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
	int crud = 0;
	int crud2 = 0;
	int next = 0;
	int i;
	int days = 0;
	int noc1;
	int noc2;
	int start_crud;
	int final_crud;
	char user_wishes_to_continue;
	int go;
	do {
		go = 0;
		printf("Please enter the initial size of the crud: ");
		noc1 = scanf("%d", &crud);
		while (noc1 != 1 || crud < 0)
		{
			printf("Im sorry that value is unrecognized or negative.\n");
			printf("Please enter the initial size of the crud: ");
			while (getchar() != '\n');
			noc1 = scanf("%d", &crud);
		}
		start_crud = crud;
		printf("Please enter the number of days: ");
		noc2 = scanf("%d", &days);
		while (noc2 != 1 || days < 0)
		{
			printf("Im sorry that value is unrecognized or negative.\n");
			printf("Please enter the number of days: ");
			while (getchar() != '\n');
			noc2 = scanf("%d", &days);
		}
		crud2 = crud;
		if (days < 5)
		{
			next = crud;
		}
		for (i = 1; i <= days; i++)
		{
			if (i % 5 == 0 || i == 5)
			{
				if (i == 5)
				{
					next = crud;
				}
				else
				{
					next = crud + crud2;
					crud = crud2;
					crud2 = next;
				}
			}
		}
		final_crud = next;
		printf("With an initial population of %d pounds of crud growing for %d days\n", start_crud, days);
		printf("The final population will be %d\n", final_crud);

		printf("Do you wish to continue(Y/N)? ");
		noc1 = scanf(" %c", &user_wishes_to_continue);
		while (noc1 != 1 || (user_wishes_to_continue != 'Y' && user_wishes_to_continue != 'y' && user_wishes_to_continue != 'N' && user_wishes_to_continue != 'n')) {
			printf("Invalid input.\n");
			printf("Enter (Y/N): ");
			while (getchar() != '\n');  
			noc1 = scanf(" %c", &user_wishes_to_continue);
		}
		if (user_wishes_to_continue == 'y' || user_wishes_to_continue == 'Y')
		{
			go = 1;
		}
		else if (user_wishes_to_continue == 'n' || user_wishes_to_continue == 'N')
		{
			go = 0;
		}
	} while (go == 1);
	return 0;
}