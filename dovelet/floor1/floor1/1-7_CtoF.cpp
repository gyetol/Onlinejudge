#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int centigrade;
	scanf("%d", &centigrade);
	printf("%.1lf", 9 / 5.0 * centigrade + 32);

	return 0;
}