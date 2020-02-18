//ex15
/* 값 N 이 주어질 때 N 의 자리수를 출력하는 프로그램을 작성하세요
예 ) 1234 --> 4 */

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

long long inputLonglong(const char*);
void myflush();

int main(void) {

	long long num = inputLonglong("자리수를 출력할 1이상의 자연수 입력:");
	int digit = 1;
	for(int i=10;i<=num;i*=10)
	{
		if (num / i >= 1) {
				
			digit++; 
		}
		else {
			break;
		}
	}

	cout << digit << endl;

	return 0;
}

long long inputLonglong(const char* message)
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