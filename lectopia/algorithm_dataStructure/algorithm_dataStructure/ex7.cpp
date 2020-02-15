//ex7
/* N의 값이 소수이면 1, 소수가 아니면 1 을 출력하는 프로그램을 작성하세요*/

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int inputInt(const char* message);
void myflush();
void isPrime(int num);

int main(void)
{
	int num = inputInt("소수인지 판별하고 싶은 자연수:");
	isPrime(num);


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

void isPrime(int num) {

	if (num == 2 || num == 3) {
		cout << "소수입니다" << endl;
		return;
	}
	bool primeNum = true;
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num%i == 0) {
			primeNum = false;
		}
	}
	if (primeNum == true) {
		cout << "소수입니다" << endl;
	}
	else {
		cout << "소수가 아닙니다" << endl;
	}

	return;
}