#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int n,inAngle,outAngle=360;
	scanf("%d", &n);
	inAngle = (n - 2) * 180;
	printf("%d %d", inAngle, outAngle);

	return 0;
}