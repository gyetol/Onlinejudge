#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int num1, num2, num3, num4;
	
	scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
	printf("%.2lf", (num1 + num2 + num3 + num4) / 4.0);

	return 0;
}