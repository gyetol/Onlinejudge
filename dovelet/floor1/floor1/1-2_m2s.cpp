#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int minute;

	scanf("%d", &minute);
	printf("%d minutes is %d seconds.", minute, minute * 60);

	return 0;
}