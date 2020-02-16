//ex11
/* N의 1 승부터 M 승까지 출력하는 프로그램을 작성하세요
예 ) N 이 2 이고 M 이 3 일 때 출력결과는 8*/

#include<iostream>
using namespace std;

int inputInt(const char*);
void myflush();

int main(void) {

	int num, exp;
	int sum = 1;
	num = inputInt("밑수를 입력하세요(1이상의 자연수):");
	exp = inputInt("지수승을 입력하세요(1이상의 자연수):");
	for (int i = 1; i <= exp; i++)
	{
		sum *= num;
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