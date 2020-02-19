//ex20
/* 자리수 N 이 주어질 때 다음과 같은 N 자리의 값을 생성하는 프로그램을 작성하세요 . N 의 값은 1 이상 18 이하 입니다
예 ) N 의 값이 2 인 경우 : 10
N 의 값이 5 인 경우 : 10000 */

#include<iostream>
#pragma warning (disable:4996)
using namespace std;

int inputInt(const char*);
void myflush();

int main(void)
{
	int digit = inputInt("자리수를 입력하세요:");
	long long res = 1;
	for (long long i = 1; i <= digit-1; i++)
	{
		res *= 10;
	}
	
	cout << res << endl;


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

