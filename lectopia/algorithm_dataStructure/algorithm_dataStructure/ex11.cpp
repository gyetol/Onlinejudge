//ex11
/* N�� 1 �º��� M �±��� ����ϴ� ���α׷��� �ۼ��ϼ���
�� ) N �� 2 �̰� M �� 3 �� �� ��°���� 8*/

#include<iostream>
using namespace std;

int inputInt(const char*);
void myflush();

int main(void) {

	int num, exp;
	int sum = 1;
	num = inputInt("�ؼ��� �Է��ϼ���(1�̻��� �ڿ���):");
	exp = inputInt("�������� �Է��ϼ���(1�̻��� �ڿ���):");
	for (int i = 1; i <= exp; i++)
	{
		sum *= num;
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
		if (getchar() == '\n'&& result>=1) {
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