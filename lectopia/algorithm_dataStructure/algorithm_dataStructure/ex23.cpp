//ex23
/* 1부터 10 까지의 값을 아래의 순서로 출력하는 프로그램을 작성하세요
1 10 2 9 3 8 4 7 5 6
*/

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();

int main(void)
{
	int num = inputInt("1이상의 자연수입력:");
	
	if (num % 2 == 0) {

		for (int i = 1; i <= (num / 2); i++)
		{
			cout << i << "    " << (num - i + 1) << "    ";
		}
	}
	else {
		for (int i = 1; i <= (num / 2); i++)
		{
			cout << i << "    " << (num - i + 1) << "    ";
		}
		cout << num / 2 + 1;
	}
	

	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n'&&result>=1) {
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