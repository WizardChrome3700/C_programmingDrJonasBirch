#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int random_function(int limit)
{
	int x = rand()%(limit + 1);
	return x;
}

int main()
{
	int random;
	int pidValue = getpid();
	srand(pidValue);
	random = random_function(5);
	printf("%d",random);
	printf("\n");
	return 0;
}
