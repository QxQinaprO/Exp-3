//Output all daffodils.
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("\nResult: ");
	int a, b, c, rec;
	for (rec = 100; rec < 1000; rec++)
	{
		a = rec / 100;
		b = rec / 10 % 10;
		c = rec % 10;
		if (rec == a * a * a + b * b * b + c * c * c)
			printf("%d ", rec);
	}
	printf("\n");
	return 0;
}