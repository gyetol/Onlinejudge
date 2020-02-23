//ex25
/* N���� M ������ �ڿ��� �� ¦���� �������� ���� ���ϴ� ���α׷��� �ۼ��ϼ��� . 
M �� ���� 2�̻� 10 �����̸� N �� ���� 1 �̻� M �̸� �Դϴ�
�� ) N �� 4 �̰� M �� 7 �϶� 4 �̻� 7 ������ �� �� ¦���� 4 �� 6 �̹Ƿ�
4 �� ���� 16
6 �� ���� 36 �̹Ƿ� ¦���� ������ ���� 52
*/

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();

int main(void)
{
	int n, m;
	int sum = 0;
	while (true)
	{
		m = inputInt("2�̻� 10������ �ڿ��� m �Է�:");
		if (m >= 2 && m <= 10) { break; }
		myflush();
	}
	while (true)
	{
		n = inputInt("1�̻� m������ �ڿ��� �Է�:");
		if (n >= 1 && n <= m) { break; }
		cout << "1�̻� " << m << "������ �ڿ��� �Է��ϼ���";
		myflush();
	}

	for (int i = n; i <= m; i++)
	{
		if (i % 2 == 0) { sum += i * i; }
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
		if (getchar() == '\n'&&result>=1) {
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