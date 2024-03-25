#include <ctype.h>
#include <stdio.h>

enum PlayerChoice1 { ROCK_P1, PAPER_P1, SCISSORS_P1 };
enum PlayerChoice2 { ROCK_P2, PAPER_P2, SCISSORS_P2 };

void clear_keyboard_buffer(void);

enum PlayerChoice1 getChoicePlayer1() {
	int skip = 0;
	char choice;
	do
	{
		
		printf("Player 1 it is your turn \n");
		printf("Please choose (r)ock, (p)aper, or (s)cissors: ");
		scanf(" %c", &choice);
		clear_keyboard_buffer();

		switch (choice) {
		case 'R':
		case 'r':
			return ROCK_P1;
		case 'P':
		case 'p':
			return PAPER_P1;
		case 'S':
		case 's':
			return SCISSORS_P1;
		default:
			skip = 0;
			continue;
		}
		skip = 1;
	} while (skip == 0);
} 

enum PlayerChoice2 getChoicePlayer2() {
	int skip = 0;
	char choice;
	do
	{

		printf("Player 2 it is your turn \n");
		printf("Please choose (r)ock, (p)aper, or (s)cissors: ");
		scanf(" %c", &choice);
		clear_keyboard_buffer();

		switch (choice) {
		case 'R':
		case 'r':
			return ROCK_P2;
		case 'P':
		case 'p':
			return PAPER_P2;
		case 'S':
		case 's':
			return SCISSORS_P2;
		default:
			skip = 0;
			continue;
		}
		skip = 1;
	} while (skip == 0);
}

int main(int argc, char* argv[])
{
	int y = 0;

	do {
		char go = '1'; //Continue the program?
		
		enum PlayerChoice1 player1Choice = getChoicePlayer1();
		enum PlayerChoice2 player2Choice = getChoicePlayer2();

		// Winner Detection.
		if (player1Choice == ROCK_P1 && player2Choice == PAPER_P2)
		{
			printf("Paper beats Rock, Player 2 wins");
			printf("\n");
		}
		else if (player1Choice == PAPER_P1 && player2Choice == ROCK_P2)
		{
			printf("Paper beats Rock, Player 1 wins");
			printf("\n");
		}
		else if (player1Choice == ROCK_P1 && player2Choice == SCISSORS_P2)
		{
			printf("Rock beats Scissors, Player 1 wins");
			printf("\n");
		}
		else if (player1Choice == SCISSORS_P1 && player2Choice == ROCK_P2)
		{
			printf("Rock beats Scissors, Player 2 wins");
			printf("\n");
		}
		else if (player1Choice == PAPER_P1 && player2Choice == SCISSORS_P2)
		{
			printf("Scissors beats Paper, Player 2 wins");
			printf("\n");
		}
		else if (player1Choice == SCISSORS_P1 && player2Choice == PAPER_P2)
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
		clear_keyboard_buffer();
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


/*
double square_root(double number);
int main(int argc, char* argv[])
{

	double x = 7.0;

	printf("The square root of %f is %.20f\n", x, square_root(x));
	return 0;
}

double square_root(double number)
{
	double guess = 100.0;
	double companion_number;
	int i;
	for (i = 0; i < 100; i++)
	{
		companion_number = number / guess;
		guess = (guess + companion_number) / 2.0;
		printf("Internal Guess %f", guess);
	}
	return guess;
}
//Babolonian Algorithm, Used to complete sqrt.
*/