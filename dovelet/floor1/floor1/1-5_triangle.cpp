#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int width, height;
	double area;
	
	scanf("%d%d", &width, &height);
	area = width * height / 2.0;
	printf("%.2lf", area);

	return 0;
}