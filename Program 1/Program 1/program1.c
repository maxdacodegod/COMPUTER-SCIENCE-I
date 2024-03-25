/***********************************************
Author: Maxim Simakoff
Date: 10/23/2023
Purpose: The user insert an integer for a starting point and an end point.
Check if Start/End point requirements are met.
Then we do collatz from the starting point until the end point is met.

Time Spent: Roughly 1.5 hours, was confused with what N was supposed to be 
but then figured out the starting point is N. It took me 30 minutes for formatting
and then I had to figure out the mathematics/logic portion.
***********************************************/
/*
// If n is even, divide it by 2 to get n / 2. 
// If n is odd, multiply it by 3 and add 1 to obtain 3n + 1.
#include <stdio.h>

void table(int start, int end);
void clear_keyboard_buffer(void);
int collatz(int n);

int main(int argc, char* argv[])
{
    int start;
    int end;

    do {
        printf("Enter a Start Point: ");
        scanf("%d", &start);
        clear_keyboard_buffer();
        printf("Enter an End Point: ");
        scanf("%d", &end);
        clear_keyboard_buffer();
    } while (start <= 1 || start >= 1000 || end <= start || end >= 10000);
    
    printf("\n\n");
    table(start, end);
    return 0;
}

void table(int start, int end)
{
    for (int i = start; i <= end; i++) 
    {
        printf("%5d:%-5d", i, collatz(i));

        if ((i - start + 1) % 7 == 0) 
        {
            printf("\n");
        }
    }
    printf("\n");
}

int collatz(int n)
{
    int x = 0;
    while (n != 1) {

        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        x++;
    }
    return x;
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
*/


//            CLASS NOTES 10/23/23
// POINTERS
// Pointers do not point
// *Pointer is a variable that stores the address of something else*
/*
#include <stdio.h>

int main(int argc, char* argv[])
{
	
	int x, y , z;
	int *p, *q,*r;
	

	int x = 42; 
	int* p; // p is a pointer to an integer
	p = &x; // assignment to p

    *p = 100; // Go to that address, put 100 in that address.

	printf("The value of x is %d\n", x);

	printf("The value of p is %p\n", p);
	
	printf("The value of x is %p\n", &x);

	printf("The value of *p is %d\n", *p); // Dereference the address, i go to the address

	printf("The value of &*p is %d\n", &*p);

	// Address of goes 1 way, dereference is opposite.
	// * is a modifier

	return 0;
}
*/
/*

#include <stdio.h>

void myswap(int* pNum1, int* pNum2);

int main(int argc, char* argv[])
{
    int x = 0;
    int y = 1;
    int temp;

    printf("x:%d    y:%d\n",x, y);
    myswap(&x, &y);
    printf("x:%d    y:%d\n", x, y);

	return 0;
}
void myswap(int* pNum1, int* pNum2)
{
    int temp;

    temp = *pNum1;
    *pNum1 = *pNum2; 
    *pNum2 = temp;
}
*/

//Aaron Bob and Charlie

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
enum duelist {AARON, BOB, CHARLIE};
typedef enum duelist Duelist;
enum boolean {FALSE, TRUE};
typedef enum boolean Boolean;

void generate_report(Boolean aaron_intentionally_misses);

const double AARON_ACCURACY = 1 / 3.0;
const double BOB_ACCURACY = 1 / 2.0;
const double CHARLIE_ACCURACY = 1.0;

Duelist simulate_duel(Boolean aaron_intentionally_misses);

void shoot(Boolean* pIs_alive, double accuracy);

int main(int argc, char* argv[])
{
    srand(time(0));
    Boolean aaron_intentionally_misses = TRUE;
    int number_of_duels = 1000000;

    generate_report(!aaron_intentionally_misses, number_of_duels);
    generate_report(aaron_intentionally_misses, number_of_duels);

	return 0;
}

void generate_report(Boolean aaron_intentionally_misses, int number_of_duels)
{
    int aaron_wins = 0;
    int bob_wins = 0;
    int charlie_wins = 0;

    if (aaron_intentionally_misses)
    {
        printf("Report for Aaron intentionally misses his first shot:\n");
    }
    else 
    {
        printf("Report for Aaron NOT intentionally misses his first shot:\n");
    }

    for (int i = 0; i < number_of_duels; i++)
    {
        switch (simulate_duel(aaron_intentionally_misses))
        {
        case AARON:
            aaron_wins++;
            break;
        case BOB:
            bob_wins++;
            break;
        case CHARLIE:
            charlie_wins++;
            break;
        }

    }
    printf("The probability that Aaron wins is %f\n", (double) aaron_wins / number_of_duels);
    printf("The probability that Bob wins is %f\n", (double) bob_wins / number_of_duels);
    printf("The probability that Charlie wins is %f\n\n", (double) charlie_wins / number_of_duels);
}

Duelist simulate_duel(Boolean aaron_intentionally_misses)
{
    Boolean aaron_is_alive = TRUE;
    Boolean bob_is_alive = TRUE;
    Boolean charlie_is_alive = TRUE;

    while (aaron_is_alive && bob_is_alive 
        || aaron_is_alive && charlie_is_alive 
        || bob_is_alive && charlie_is_alive)
    {
        if (aaron_is_alive && !aaron_intentionally_misses)
        {
            if (charlie_is_alive)
            {
                shoot(&charlie_is_alive, AARON_ACCURACY);
            }
            else
            {
                shoot(&bob_is_alive, AARON_ACCURACY);
            }
        }
        if (bob_is_alive)
        {
            if (charlie_is_alive)
            {
                shoot(&charlie_is_alive, BOB_ACCURACY);
            }
            else
            {
                shoot(&aaron_is_alive, BOB_ACCURACY);
            }
        }
        if (charlie_is_alive)
        {
            if (bob_is_alive)
            {
                shoot(&bob_is_alive, CHARLIE_ACCURACY);
            }
            else
            {
                shoot(&aaron_is_alive, CHARLIE_ACCURACY);
            }
        }
        aaron_intentionally_misses = FALSE;
    }
    if (aaron_is_alive)
    {
        return AARON;
    }
    else if (bob_is_alive)
    {
        return BOB;
    }
    return CHARLIE;
}

void shoot(Boolean* pIs_alive, double accuracy)
{
    // *pIs_alive = FALSE;
    // computers are not random.
    double roll;
    roll = rand();
    if (roll / RAND_MAX <= accuracy)
    {
        *pIs_alive = FALSE;
    }
    else
    {
        *pIs_alive = TRUE;
    }
}