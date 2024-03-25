#include <ctype.h>
#include <stdio.h>

void clear_keyboard_buffer();


int main(int argc, char* argv[])
{
	int y = 0;

	do{
	char P1; //Player 1
	char P2; //Player 2
	char go = 1; //Continue the program?
	while (1)
	{

		printf("Player 1 it is your turn \n");
		printf("Please choose (r)ock, (p)aper, or (s)cissors: ");
		scanf(" %c", &P1);
		clear_keyboard_buffer();

		switch (P1)
		{
		case 'R':
		case 'r':
			P1 = 'R';
			printf("\n");
			break;
		case 'P':
		case 'p':
			P1 = 'P';
			printf("\n");
			break;
		case 'S':
		case 's':
			P1 = 'S';
			printf("\n");
			break;
		default:
			continue;
		}

		break;
	}

	while (1)
	{

		printf("Player 2 it is your turn \n");
		printf("Please choose (r)ock, (p)aper, or (s)cissors: ");
		scanf(" %c", &P2);
		clear_keyboard_buffer();

		switch (P2)
		{
		case 'R':
		case 'r':
			P2 = 'R';
			printf("\n");
			break;
		case 'P':
		case 'p':
			P2 = 'P';
			printf("\n");
			break;
		case 'S':
		case 's':
			P2 = 'S';
			printf("\n");
			break;
		default:
			continue;
		}
		break;
	}

	// Winner Detection.
	if (P1 == 'R' && P2 == 'P')
	{
		printf("Paper beats Rock, Player 2 wins");
		printf("\n");
	}
	else if (P1 == 'P' && P2 == 'R')
	{
		printf("Paper beats Rock, Player 1 wins");
		printf("\n");
	}
	else if (P1 == 'R' && P2 == 'S')
	{
		printf("Rock beats Scissors, Player 1 wins");
		printf("\n");
	}
	else if (P1 == 'S' && P2 == 'R')
	{
		printf("Rock beats Scissors, Player 2 wins");
		printf("\n");
	}
	else if (P1 == 'P' && P2 == 'S')
	{
		printf("Scissors beats Paper, Player 2 wins");
		printf("\n");
	}
	else if (P1 == 'S' && P2 == 'P')
	{
		printf("Scissors beats Paper, Player 1 wins");
		printf("\n");
	}
	else
	{
		printf("It is a tie");
		printf("\n");
	}


	printf("Do you wish to continute (y/n): ");
	scanf(" %c", &go);
	while (go != 'Y' && go != 'y' && go != 'n' && go != 'N')
	{
		printf("\n\n");
		printf("Do you wish to continute (y/n): ");
		scanf(" %c", &go);
	}
	switch (go)
	{
		case 'y':
		case 'Y':
			printf("Rerunning program... \n");
			printf("\n");
			y = 1;
			break;
		case 'n':
		case 'N':
			y = 0;
			break;
		default:
			return 0;
	}

} while (y == 1);

	return 0;

}
	
void clear_keyboard_buffer(void)	
{
	char c;
	scanf("%c", &c);
	while (c != '\n')
	{
		scanf("%c", &c);
	}	
}