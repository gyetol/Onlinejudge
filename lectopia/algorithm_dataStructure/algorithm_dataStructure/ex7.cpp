//ex7
/* N�� ���� �Ҽ��̸� 1, �Ҽ��� �ƴϸ� 1 �� ����ϴ� ���α׷��� �ۼ��ϼ���*/

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int inputInt(const char* message);
void myflush();
void isPrime(int num);

int main(void)
{
	int num = inputInt("�Ҽ����� �Ǻ��ϰ� ���� �ڿ���:");
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

void isPrime(int num) {

	if (num == 2 || num == 3) {
		cout << "�Ҽ��Դϴ�" << endl;
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
		cout << "�Ҽ��Դϴ�" << endl;
	}
	else {
		cout << "�Ҽ��� �ƴմϴ�" << endl;
	}

	return;
}