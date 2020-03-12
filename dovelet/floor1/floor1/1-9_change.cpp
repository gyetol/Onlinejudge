#include<stdio.h>
#pragma warning (disable:4996)
#define MONEY 1000
#define CHANGE500 500
#define CHANGE100 100
#define CHANGE50 50
#define CHANGE10 10

int main(void)
{
	int price, change,left;
	int cnt500, cnt100, cnt50, cnt10;

	scanf("%d", &price);
	
	change = MONEY-price;
	cnt100 = change / CHANGE100;
	left = change % CHANGE100;
	cnt50 = left / CHANGE50;
	left = left % CHANGE50;
	cnt10 = left / CHANGE10;

	printf("%d %d %d", cnt100, cnt50, cnt10);

	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////
/*

#define은 세미콜론을 붙이지 않는다!

*/