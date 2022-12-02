//Input a positive interger 'n', calculate n!.
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("Input 'n': ");
	int n, rec, fec = 1;
	scanf("%d", &n);
	for (rec = 1; rec <= n; rec++)
	{
		fec *= rec;
	}
	printf("\nResult: %d\n", fec);
	return 0;
}