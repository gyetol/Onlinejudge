#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int time, day, hour, min, sec,rest;

	scanf("%d", &time);
	
	day = time / 86400; // 3600*24=86400
	rest = time - day * 86400;
	hour = rest / 3600;
	rest = rest - hour * 3600;
	min = rest / 60;
	sec = rest - min * 60;

	printf("%d %d %d %d", day, hour, min, sec);

	return 0;
}