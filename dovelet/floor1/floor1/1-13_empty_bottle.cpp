#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int bottle1,bottle2,bottle3;

	scanf("%d", &bottle1);

	bottle2 = bottle1 / 4 + bottle1 % 4;
	bottle3 = bottle2 / 4 + bottle2 % 4;
	

	printf("%d %d", bottle1+bottle2+bottle3-bottle1%4-bottle2%4-bottle2%4, bottle3);

	return 0;
}

/*

문제가 틀렸는데, 계속 고민한 문제 ㅠ

*/