//ex10
/*  2�� 1 �º��� N �±��� ����ϴ� ���α׷��� �ۼ��ϼ���
�� ) N �� 3 �϶� ��°���� 8 */

#include<iostream>
using namespace std;

int inputInt(const char *);
void myflush();

int main(void) {

	int num = inputInt("1�̻��� �ڿ��� n�� �Է��ϼ���(2�� n���� ���ɴϴ�):");
	int sum = 1;
	for (int i = 1; i <= num; i++)
	{
		sum *= 2;
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