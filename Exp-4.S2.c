//Input a positive interger 'n', calculate 1!+2!+...+n!.
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("Input 'n': ");
	int n, rec, fec = 1, ans = 0;
	scanf("%d", &n);
	for (rec = 1; rec <= n; rec++)
	{
		fec *= rec;
		ans += fec;
	}
	printf("\nResult: %d\n", ans);
	return 0;
}
