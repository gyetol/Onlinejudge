//ex22
/* ��ǰ���� N �� ȸ����� M �� �־��� �� ȸ�� ��޿� ���� ���� �ǸŰ��� ����ϴ� ���α׷�
�� �ۼ��ϼ���
ȸ����޿� ���� �������� �Ʒ��� �����ϴ�
��� ������
1 25
2 20
3 15
4 10
�� �� 0
�� ) ��ǰ������ 10000 �̸� ȸ������� 4 �� ��� ���� �ǸŰ��� 9000 */

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

#define FIRST 0.75
#define SECOND 0.8
#define THIRD 0.85
#define FOURTH 0.9


int inputInt(const char*);
void myflush();

int main(void)
{
	int price = inputInt("��ǰ ������ �Է��ϼ���:");
	int level;
	while (true) {
		level = inputInt("ȸ�� ����� �Է��ϼ���(1~5):");

		if (level < 1 || level>5) {
			cout << "�߸��Է��ϼ̽��ϴ�. 1~5��ޱ��� �ֽ��ϴ�." << endl;
		}
		else { break; }
	}
	
	switch (level)
	{
	case 1: cout << "������ " << price * FIRST << "���Դϴ�." << endl; break;
	case 2: cout << "������ " << price * SECOND << "���Դϴ�." << endl; break;
	case 3: cout << "������ " << price * THIRD << "���Դϴ�." << endl; break;
	case 4: cout << "������ " << price * FOURTH << "���Դϴ�." << endl; break;
	default: cout << "������ " << price << "���Դϴ�." << endl; break;
	}



	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n'&&result>=0) {
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