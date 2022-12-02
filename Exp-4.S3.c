//Output the first twenty terms of the Fibonacci sequence.
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("\nResult: ");
	int a1 = 1, a2 = 1, rec;
	for (rec = 1; rec <= 10; rec++)
	{
		printf("%d\t%d\t", a1, a2);
		a1 = a1 + a2;
		a2 = a1 + a2;
	}
	printf("\n");
	return 0;
}