#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{	
	double dist, percent,res;
	scanf("%lf%lf", &dist, &percent);
	res = -(dist * (percent/100));
	printf("%.3lf", res);


	return 0;
}