#include<stdio.h>

void login()
{
	char firstName[32];
    char lastName[32];
    printf("Enter first name:");
    scanf("%s", &firstName);
    fflush(stdout);
    printf("Enter last name:");
    scanf("%s", &lastName);
    fflush(stdout);
    printf("Hello %s %s.", firstName, lastName);
}

int main()
{
	login();
	return 0;
}
