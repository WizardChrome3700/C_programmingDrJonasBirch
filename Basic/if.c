#include<stdio.h>

int main()
{
	int speed;
	printf("How fast are you driving? (km/hr)\n");
	scanf("%d", &speed);

	if(speed > 100)
	{
		printf("You are driving too fast.\n");
	}
	else if(speed > 80)
	{
		printf("You are driving perfectly fine.\n");
	}
	else
	{
		printf("Ok\n");
	}
	return 0;
}
