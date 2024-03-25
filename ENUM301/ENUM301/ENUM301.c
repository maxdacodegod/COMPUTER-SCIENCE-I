#include <stdio.h>
#include <Windows.h>
enum suit {HEARTS = 3, DIAMONDS, CLUBS, SPADES};
// enum - E-Numerated type
// Fancy collection of named constants
typedef enum suit Suit;
// typedef - Changes the name
enum rank
{
	ACE = 1,
	TWO = 2,
	THREE = 3,
	FOUR = 4,
	FIVE,
	SIX,
	SEVEN, 
	EIGHT,
	NINE,
	TEN,
	JACK,
	QUEEN, 
	KING,
};

typedef enum rank Rank;

struct card
{
	Suit suit;
	Rank rank;
};
typedef struct card Card;

void output_card(Card card);

int main(int argc, char* argv[])
{
// int char or double or NONE OF THE ABOVE
	
	Card card;
	Card card2;

	card.rank = ACE;
	card.suit = SPADES;
	card2.rank = ACE;
	card2.suit = HEARTS;
	output_card(card);
}

void output_card(Card card)
{
	int i;

	if (card.suit == SPADES || card.suit == CLUBS)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED 
			| BACKGROUND_RED | BACKGROUND_GREEN
			| BACKGROUND_BLUE);
	}
	else {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED 
			| FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN 
			| BACKGROUND_BLUE | BACKGROUND_INTENSITY);
		}
		switch (card.rank)
		{
		case TEN:
			printf("T");
			break;
		case JACK:
			printf("J");
			break;
		case QUEEN:
			printf("Q");
			break;
		case KING:
			printf("K");
			break;
		case ACE:
			printf("A");
			break;
		defaut:
			printf("%d", card.rank);
		}
		printf("%c", card.suit);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED
			| FOREGROUND_GREEN | FOREGROUND_BLUE);
}

Card get_card(void)
{
	Card card;
	printf("Please enter the rank of the card Ace = 1 \n");
	printf("... Jack = 11, Queen = 12, King = 13");
	scanf("%d", &number_rank);
	card.rank = number_rank;
		printf("Please enter the suit (S)pades (H)earts (D)iamonds (C)lubs");
	scanf(" %c", &character_suit);
	switch (character_suit)
	{
	case 'S':
	case 'H':
	case 'D':
	case 'C':
	}

}

/*
	Class Notes 10:16am

const double PI = 3.1459; //Global Constant, you can't change it. Un-Modifiable

// 0.3048 meters in a foot
const double FEET_TO_METERS = 0.3048; 
const double METERS_TO_FEET = 0.3048;


int main(int argc, char* argv[])
{
	double area = 3.1 * radius * radius;
}
*/
/*********************************************/
// 10:10am
// Magic number - A number that is not 0 or 1 that is being used 
/*
int x; // Global Variable "You are putting your baby in the Road!"
int x; // "Being Careful Is NOT Good Enough."
const double PI = 3.1459; //Global Constant, you can't change it. Un-Modifiable

int main(int argc, char* argv[])
{
	int x; //Local Variable
}
*/