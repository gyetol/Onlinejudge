//ex25
/* N부터 M 사이의 자연수 중 짝수의 제곱값의 합을 구하는 프로그램을 작성하세요 . 
M 의 값은 2이상 10 이하이며 N 의 값은 1 이상 M 미만 입니다
예 ) N 이 4 이고 M 이 7 일때 4 이상 7 이하의 값 중 짝수는 4 와 6 이므로
4 의 제곱 16
6 의 제곱 36 이므로 짝수의 제곱의 값은 52
*/

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();

int main(void)
{
	int n, m;
	int sum = 0;
	while (true)
	{
		m = inputInt("2이상 10이하의 자연수 m 입력:");
		if (m >= 2 && m <= 10) { break; }
		myflush();
	}
	while (true)
	{
		n = inputInt("1이상 m이하의 자연수 입력:");
		if (n >= 1 && n <= m) { break; }
		cout << "1이상 " << m << "이하의 자연수 입력하세요";
		myflush();
	}

	for (int i = n; i <= m; i++)
	{
		if (i % 2 == 0) { sum += i * i; }
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