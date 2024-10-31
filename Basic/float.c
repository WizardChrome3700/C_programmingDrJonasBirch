#include<stdio.h>

int main()
{
	float pi, r, answer;
	pi = 3.14;
	printf("What is r in cm?\n");
	scanf("%f",&r);
	answer = pi*r*r;
	printf("answer:%f",answer);
	return 0;
}
