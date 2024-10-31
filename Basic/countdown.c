#include<stdio.h>
#include<unistd.h>

int main()
{
	int count = 5;
	while(1)
	{
		printf("%d\n", count);
		count--;
		sleep(1);
		if(count == 0)
		{
			break;
		}
	}
	return 0;
}
