//ex26
/* ����� �����߿� ������ A ȣ�ڿ� ��Ⱓ 10 �ϰ� �ӹ��� �����Դϴ�
A ȣ���� ����� 3 �ϵ��� ������ �� �ִ� �Ⱓ��ݰ� ���� �Ϸ縸 ������ �� �ִ� ���Ͽ���� �ֽ��ϴ�
���� �����ϰ� 10 �ϵ��� ������ �� �ִ� ����� ���ϴ� ���α׷��� �ۼ��ϼ���
��) 3 �� ���ڿ���� 3000 ���̸� 1 �� ���ڿ���� 900 ���̶��
1 �� ���ڿ�� (M) 900 �� X 10 �� �� 9000 ���� ���� �����ϰ� ������ �� �ִ� ����� �˴ϴ�
��) 3 �� ���ڿ���� 3000 ���̸� 1 �� ���ڿ���� 1100 ���̶��
3 �� ���ڿ�� (N) 3000 �� X 3 �� + 1 �� ���ڿ�� (M) X 1 �� �� 10100 ���� ���� �����ϰ� ������ �� �ִ� ����� �˴ϴ�*/

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();

int main(void)
{
	int feePer3days, feePer1day;
	feePer3days = inputInt("3�� ���ڿ�� �Է�:");
	feePer1day = inputInt("1�� ���ڿ�� �Է�:");

	if (feePer1day * 3 > feePer3days) { cout << feePer3days * 3 + feePer1day << "���� �������ڿ���Դϴ�.(3�ϱ� 3��,1�ϱ� 1���� �̿��ϼ���)" << endl; }
	else { cout << feePer1day * 10 << "���� �������ڿ���Դϴ�. (1�ϱ� 10���� �̿��ϼ���)" << endl; }


	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n'&& result>=0) {
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