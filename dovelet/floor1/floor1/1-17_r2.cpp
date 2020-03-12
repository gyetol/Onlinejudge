#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int r1, r2, mean;
	scanf("%d%d", &r1, &mean);

	r2 = 2 * mean - r1;
	printf("%d", r2);


	return 0;
}