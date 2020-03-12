#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int n, m, p, c,real,res;
	scanf("%d%d%d%d", &n, &m, &p, &c);

	res = (n + c) - (m + c - p); //n+c는 손익분기점,m+c는 손님이 준 돈, p는 손님이 준 위조돈

	printf("%d", res);


	return 0;
}