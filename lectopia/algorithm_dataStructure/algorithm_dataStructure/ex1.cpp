/*ex1 
�������� ���ϴ� ���α׷��� �ۼ��ϼ���.
�������� ���ϴ� ������ ������ ����.
(1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13 ... 1/1��) * 4 */

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
