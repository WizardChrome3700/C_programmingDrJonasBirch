#include<stdio.h>
#include<string.h>

int main()
{
	char str[32];
	char* p;
	strncpy(str, "i like apples",31);
	p = str;
	printf("%c",*p);
	return 0;
}
