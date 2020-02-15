//ex8
/* N이하의 값 중 소수인 값을 출력하는 프로그램을 작성하세요
예 ) N 의 값 10 이 주어질 때 출력되는 값은 2 3 5 7  */

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int inputInt(const char* message);
void myflush();
void printPrimeNums(int num);

int main(void) {

	int num = inputInt("2이상의 자연수 입력:");
	printPrimeNums(num);


	return 0;
}

void printPrimeNums(int num) {

	
	for (int i = 2; i <= num; i++)
	{
		bool isPrime = true;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0) {
				isPrime = false;
			}
		}
		if (isPrime==true) {
			cout << i << " ";
		}
	}

}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n' && result>=2) {
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