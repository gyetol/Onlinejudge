#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int num1, num2;

	scanf("%d%d", &num1, &num2);
	printf("%d %d", num1 / num2, num1%num2);

	return 0;
}