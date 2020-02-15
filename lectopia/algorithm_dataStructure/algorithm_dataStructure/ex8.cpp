//ex8
/* N������ �� �� �Ҽ��� ���� ����ϴ� ���α׷��� �ۼ��ϼ���
�� ) N �� �� 10 �� �־��� �� ��µǴ� ���� 2 3 5 7  */

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int inputInt(const char* message);
void myflush();
void printPrimeNums(int num);

int main(void) {

	int num = inputInt("2�̻��� �ڿ��� �Է�:");
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