//ex21
/* N의 값이 주어질 때 각 자리의 값을 출력하는 프로그램을 작성하세요
예 ) N 의 값이 512 일 경우의 출력
5
1
2
*/

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();
int outputDigit(int num);
int tenExp(int num);


int main(void)
{
	int num = inputInt("1이상의 자연수 입력:");
	int digit = outputDigit(num);

	for (int i = digit-1; i >= 0; i--)
	{
		cout << num / tenExp(i) << endl;
		num = num - (num / tenExp(i)*tenExp(i));
	}



	return 0;
}

int tenExp(int num) {
	int res=1;
	for (int i = 1; i <= num; i++)
	{
		res *= 10;
	}
	return res;
}

int outputDigit(int num)
{
	int cnt = 0;
	for (int i = 1; i <= num; i *= 10)
	{
		if (num / i >= 1)
		{
			cnt++;
		}
	}

	return cnt;
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