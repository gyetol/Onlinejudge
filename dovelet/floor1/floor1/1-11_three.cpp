#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int num1, num2;
	int num2_100, num2_10, num2_1,rest;

	scanf("%d%d", &num1, &num2);
	num2_100 = num2 / 100;
	rest = num2 - num2_100 * 100;
	num2_10 = rest / 10;
	num2_1 = rest - num2_10 * 10;

	printf("%d\n", num1*num2_1);
	printf("%d\n", num1*num2_10);
	printf("%d\n", num1*num2_100);
	printf("%d\n", num1*num2_1 + num1 * num2_10*10 + num1 * num2_100*100);

	return 0;
}