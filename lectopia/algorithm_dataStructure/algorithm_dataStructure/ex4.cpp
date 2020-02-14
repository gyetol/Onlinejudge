//ex4
/* 1부터 N 까지의 홀수의 합을 for 문을 이용하여 출력하 는 프로그램을 작성하세요 */

#include<iostream>
using namespace std;

int inputInt(const char* message);
void myflush();

int main(void) {

	int num = inputInt("숫자입력:");
	int sum = 0;
	for (int i = 1; i <= num; i += 2)
	{
		sum += i;
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