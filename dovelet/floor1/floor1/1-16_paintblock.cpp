#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int width, depth, height,res;
	scanf("%d%d%d", &width, &depth, &height);

	res = 2 * (height - 2) * 2 + 2 * (depth - 2) * 2 + 2 * (width - 2) * 2;
	printf("%d", res);



	return 0;
}