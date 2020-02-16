//ex10
/*  2의 1 승부터 N 승까지 출력하는 프로그램을 작성하세요
예 ) N 이 3 일때 출력결과는 8 */

#include<iostream>
using namespace std;

int inputInt(const char *);
void myflush();

int main(void) {

	int num = inputInt("1이상의 자연수 n을 입력하세요(2의 n승이 나옵니다):");
	int sum = 1;
	for (int i = 1; i <= num; i++)
	{
		sum *= 2;
	}

	cout << sum << endl;


	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n'&& result>=1) {
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