#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	srand(getpid());
	int balance = 1000;
	int bet;
	int guess;
	while(1)
	{
		printf("Enter your bet: ");
		scanf("%d", &bet);
		printf("Guess a number between 1 and 6 (enter 0 to quit): ");
		scanf("%d", &guess);
		if(guess == 0)
		{
			printf("You are going back with %d.", balance);
			break;
		}
		else
		{
			printf("Throwing the dice...\n");
			int rand6 = rand()%6 + 1;
			sleep(2);
			printf("Dice lands on %d.\n",rand6);
			if(guess == rand6)
			{
				printf("congratulations you won %d.\n", 3*bet);
				balance += 3*bet;
			}
			else
			{
				printf("you lost %d.\n", bet);
				balance -= bet;
			}
			printf("Your current balance is %d.\n", balance);
			if(balance < 0)
			{
				printf("You lost everything.\n");
				break;
			}
		}
	}
	return 0;
}

