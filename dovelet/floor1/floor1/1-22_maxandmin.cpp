#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int x, y;
	scanf("%d%d", &x, &y);
	printf("%d", x);

	return 0;
}

//////////////////////////////////////
/*

	1. 3항연산자를 이용해보자

int main(void)
{
	int x,y,res;
	scanf("%d%d",&x,&y);
	res=(x<y?x:y)>x?(x<y?x:y):x;
	printf("%d",res);	

}

*/