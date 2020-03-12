#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int reportCnt,score;
	scanf("%d%d", &reportCnt, &score);

	printf("%d", reportCnt*(score - 1) + 1);



	return 0;
}