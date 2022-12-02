//Input three real numbers, rank them from the smallest to the biggest.
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("Input numbers(Format: a b c): ");
	float a, b, c, tra;
	scanf("%f %f %f", &a, &b, &c);
	if (a > b)
	{
		tra = a;
		a = b;
		b = tra;
	}
	if (a > c)
	{
		tra = a;
		a = c;
		c = tra;
	}
	if (b > c)
	{
		tra = b;
		b = c;
		c = tra;
	}
	printf("\nSequence: %f %f %f\n", a, b, c);
	return 0;
}