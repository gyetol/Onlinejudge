/*ex1 
원주율을 구하는 프로그램을 작성하세요.
원주율을 구하는 공식은 다음과 같다.
(1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13 ... 1/1억) * 4 */

#include<stdio.h>
#include<limits>
#pragma warning (disable:4996)

int main(void) {

	double res1 = 0, res2 = 0;

	for (double i = 1; i < INT_MAX - 4; i += 4)
	{
		res1 += (1.0 / i);
	}

	for (double i = 3; i < INT_MAX - 4; i += 4) 
	{
		res2 += (1.0 / i);
	}

	res1 = (res1 - res2)*4;
	printf("%lf", res1);
	


	return 0;
}
