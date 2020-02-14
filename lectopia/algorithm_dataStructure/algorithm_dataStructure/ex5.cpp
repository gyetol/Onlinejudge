//ex5
/*  1부터 N 까지의 짝수의 합을 while 문을 이용하여 출력하 는 프로그램을 작성하세요 */

#include<iostream>
#pragma warning(disable:4996)
using namespace std;

int inputInt(const char* message);
void myflush();

int main(void) {

	int num = inputInt("숫자입력:");
	int sum = 0;
	int i = 2;
	while (i <= num)
	{
		sum += i;
		i+=2;
	}
	printf("%d", sum);

	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n') {
			break;
		}
		else {
			printf("잘못된 입력입니다.\n");
			myflush();
			continue;
		}
	}
	return result;
}

void myflush()
{
	while (getchar() != '\n') { ; }

	return;
}