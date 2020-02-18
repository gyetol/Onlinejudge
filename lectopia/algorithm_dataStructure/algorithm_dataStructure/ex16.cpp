//ex16
/* 짝수자리의 값 N 이 주어질 때 선두 절반의 값과 하위 절반의 값을 출력하는 프로그램을 작성
하세요
예 ) 1234 --> 선두 : 12 하위 : 34
*/

#include<iostream>
#pragma warning (disable:4996)
using namespace std;

int inputInt(const char*);
void myflush();
int calDigit(int num);
bool isEvenDigitNum(int num);
int tenExponent(int num);

int main(void) {

	int num = inputInt("숫자를 입력하세요(짝수자리):");
	int tenExp = tenExponent(calDigit(num) / 2);
	cout << "선두 : " << num / tenExp << " 하위 : " << num % tenExp << endl;

	return 0;
}

int tenExponent(int num) {
	int result=1;
	for (int i = 1; i <= num; i++)
	{
		result *= 10;
	}
	return result;
}

int calDigit(int num) {
	int digit = 1;
	for (int i = 10; i <= num; i *= 10)
	{
		if (num / i >= 1) {

			digit++;
		}
		else {
			break;
		}
	}
	return digit;
}

bool isEvenDigitNum(int num) {
	if (calDigit(num) % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n'&&isEvenDigitNum(result)) {
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