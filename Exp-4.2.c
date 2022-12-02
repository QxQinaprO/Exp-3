//Calculate 1-1/3+1/5-...-1/99.
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int sig = 1;
	double ans = 0, rec;
	for (rec = 1; rec <= 99; rec = rec + 2)
	{
		ans = ans + sig / rec;
		sig = -sig;
	}
    printf("\nResult: %lf\n", ans);
	return 0;
}
