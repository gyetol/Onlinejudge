#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int height, width, area;
	//printf("직사각형의 높이를 입력하시오:");
	scanf("%d", &height);
	//printf("직사각형의 너비를 입력하시오:");
	scanf("%d", &width);
	
	area = height * width;
	//printf("직사각형의 넓이는 %d입니다.\n", area);
	printf("%d\n", area);

	return 0;
}