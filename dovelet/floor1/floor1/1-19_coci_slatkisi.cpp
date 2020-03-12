#include<stdio.h>
#pragma warning (disable:4996)

int exponent(int);

int main(void)
{
	int price, digit;
	scanf("%d%d", &price, &digit);
	printf("%d", (price + exponent(digit) * 5) / (exponent(digit) * 10)*(exponent(digit) * 10));


	return 0;
}

int exponent(int digit)
{
	int i;
	int res = 1;
	for (i = 1; i < digit; i++)
	{
		res = (res << 3) + (res << 1);
	}

	return res;
}// 0.18sec




//#include<stdio.h>
//
//int main(void)
//{
//	int price, digit;
//	int i;
//	int res = 1;
//	scanf("%d%d", &price, &digit);
//	
//	for (i = 1; i < digit; i++)
//	{
//		res *= 10;
//	}
//	printf("%d", (price + res * 5) / (res*10)*(res*10));
//
//
//	return 0;
//} //0.12sec


//////////////////////////////////////////////////////////////////////////////////
/*

1.pow라는 라이브러리함수는 지수승을 만들어준다

2.shift연산자를 이용해서 10을 곱해주는 것보다 그냥 10을 곱해주는게 더 빠르네 (왜지... 10을 곱하는 건 10번 더하는 연산일텐데..!!!!)

3.함수호출 여러번하는 거랑 메인에서 쭉 내려오는 거랑 속도차이가 없네... (일단 이건 3번밖에 호출 안했으니까 별 차이 없을수도)

*/

////////////////////////////////////////////////////////////////////////////////////
