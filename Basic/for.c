#include<stdio.h>
#include<assert.h>

void multi(int table, int x)
{
	int result;
	result = table * x;
	printf("%d x %d = %d\n", table, x, result);
}

int main()
{
	int x, table;
	printf("Select multiplication table:");
	scanf("%d", &table);
	assert((table < 13) && (table > 0));
	for(x = 0; x < 13; x++)
	{
		multi(table,x);
	}
	return 0;
}
