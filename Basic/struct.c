#include<stdio.h>
#include<string.h>

struct person {
	char title[8];
	char lastName[32];
	int age;
};

int main()
{
	struct person akshat;
	strcpy(akshat.title, "Student");
	strcpy(akshat.lastName, "Panda");
	akshat.age = 22;

	printf("%s %s of age %d.\n",
			akshat.title,
			akshat.lastName,
			akshat.age);
	return 0;
}
