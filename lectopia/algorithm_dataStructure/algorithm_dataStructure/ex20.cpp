//ex20
/* �ڸ��� N �� �־��� �� ������ ���� N �ڸ��� ���� �����ϴ� ���α׷��� �ۼ��ϼ��� . N �� ���� 1 �̻� 18 ���� �Դϴ�
�� ) N �� ���� 2 �� ��� : 10
N �� ���� 5 �� ��� : 10000 */

#include<iostream>
#pragma warning (disable:4996)
using namespace std;

int inputInt(const char*);
void myflush();

int main(void)
{
	int digit = inputInt("�ڸ����� �Է��ϼ���:");
	long long res = 1;
	for (long long i = 1; i <= digit-1; i++)
	{
		res *= 10;
	}
	
	cout << res << endl;


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

