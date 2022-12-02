//Input a positive interger, judge if its a prime number.
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	printf("Input number: ");
	int a, jud = 1, rec, cen;
	scanf("%d", &a);
	if (a < 2)
		printf("\n%d is not a prime number.\n", a);
	else
	{
		cen = sqrt(a);
		for (rec = 2; rec <= cen; rec++)
		{
			if (a % rec == 0)
			{
				jud = 0;
				break;
			}
		}
		if (jud == 0)
			printf("\n%d is not a prime number.\n", a);
		else
			printf("\n%d is a prime number.\n", a);
	}
	return 0;
}