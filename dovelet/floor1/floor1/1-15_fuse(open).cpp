#include<stdio.h>
#pragma warning (disable:4996)
#pragma warning (disable:4244) // 0.5 단위이기 때문에 2배하면 무조건 정수

int main(void)
{
	int com, prt, rot;
	double res;
	int res1;
	scanf("%d%d%d", &com, &prt, &rot);

	res = com * 2.5 + prt * 2.0 + rot * 0.5;
	res1 = res * 2;
	if (res1 % 10 != 0) {
		res1 += 10;
		res1 = res1 - res1 % 10;
	}
	

	printf("%d amperes", res1);

	return 0;
}
///////////////////////////////////
/*

	일의자리 버림은 %10
	일의자리 반올림은 5를 더하고 10으로 나눈뒤 다시 10을 곱한다
	일의자리 올림은 9를 더하고 10으로 나눈뒤 다시 10을 곱한다

*/
///////////////////////////////////////