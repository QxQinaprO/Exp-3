//Input two numbers, calculate their greatest common divisor.
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("Input numbers(Format: a b): ");
	int a, b, max, rec;
	scanf("%d %d", &a, &b);
	if (a > b)
		max = a;
	else
		max = b;
	for (rec = max; rec > 0; rec--)
		if (a % rec == 0 && b % rec == 0)
		{
			printf("\nThe greatest common divisor: %d\n", rec);
			break;
		}
	return 0;
}