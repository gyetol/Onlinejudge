//ex16
/* ¦���ڸ��� �� N �� �־��� �� ���� ������ ���� ���� ������ ���� ����ϴ� ���α׷��� �ۼ�
�ϼ���
�� ) 1234 --> ���� : 12 ���� : 34
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

	int num = inputInt("���ڸ� �Է��ϼ���(¦���ڸ�):");
	int tenExp = tenExponent(calDigit(num) / 2);
	cout << "���� : " << num / tenExp << " ���� : " << num % tenExp << endl;

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
			printf("�߸��� �Է��Դϴ�.\n");
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