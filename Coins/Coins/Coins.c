#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int make_change(int amount, int start);

int main(int argc, char* argv[])
{
	int size = 5;
	int ways = 0;
	int start = 0;
	int amount;
	
	printf("Enter dollar amount (In Cents): ");
	scanf("%d", &amount);

	ways = make_change(amount, start);

	if (ways != -1)
	{
		printf("The number of ways to make change for %d cents is %d", amount, ways);
	}

	return 0;
}

int make_change(int amount, int start)
{
	int coins[] = { 1,5,10,25,50 };
	int ways = 0;
	if (amount == 0)
	{
		return 1;
	}
	if (amount < 0)
	{
		return 0;
	}
	for (int i = start; i < 5; i++)
	{
		ways += make_change(amount - coins[i], i);
	}
	return ways;
}


/* WRONG TRIAL */
//int make_change(int coins[], int size, int amount);
//
//int main(int argc, char* argv[])
//{
//	int coins[] = {1,5,10,25,50};
//	int size = 5;
//	int amount;
//	int ways = 0;
//
//	printf("Enter dollar amount (In Cents): ");
//	scanf("%d", &amount);
//
//	ways = make_change(coins, size, amount);
//
//	if (ways != -1)
//	{
//		printf("The number of ways to make change for %d cents is %d", amount, ways);
//	}
//
//	return 0;
//}
//
//int make_change(int coins[], int coinSize, int amount)
//{
//	int ways = 0;
//	int i = 0;
//	int a, c, result;
//
//	int *dp = (int*) malloc((amount + 1) * sizeof(int));
//
//	if (dp == NULL) 
//	{
//		printf("Memory allocation failed\n");
//		free(dp);
//		return 1;
//	}
//
//	if (amount == 0)
//	{
//		free(dp);
//		return 1;
//	}
//	if (amount < 0 || amount > 7489)
//	{
//		printf("Error, amount inputted is either negative or too large!");
//		free(dp);
//		return -1;
//	}
//
//	
//	for (i = 0; i <= amount; i++) 
//	{
//		if (i <= 4) 
//		{
//			dp[i] = i + 1;
//		}
//		else 
//		{
//			dp[i] = amount + 1;
//		}
//	}
//		
//	dp[0] = 1;
//
//	// dp[$AMOUNT$] = Takes X amount of coins
//	//Cases
//	/*
//	dp[0] = 1;
//	dp[1] = 1;
//	dp[2] = 2;
//	dp[3] = 3;
//	dp[4] = 4;
//	*/
//
//
//	for (a = 1; a <= amount; a++) 
//	{
//		for (c = 0; c < 5; c++) 
//		{
//			if (a - coins[c] >= 0) 
//			{
//				dp[a] = fmin(dp[a], 1 + dp[a - coins[c]]);
//			}
//		}
//	}
//	
//
//	if (dp[amount] != amount + 1) 
//	{
//		result = dp[amount];
//	}
//	else 
//	{
//		result = -1;
//	}
//	free(dp);
//	return result;
//}