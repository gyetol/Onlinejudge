//ex19
/* A�� B �� ����� ���� ���� �� ������ �� �� ���ڸ� ����ϴ� ���α׷��� �ۼ��ϼ���
���� ���� ���� ���Ǵ� �����ʹ� ������ �����ϴ�
���� : 0
���� : 1
�� : 2
�� ) A : ���� (0) B : ���� (1) �� �� ���ڴ� B
A : �� (0) B : ���� (1) �� �� ���ڴ� A
*/

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();

int main(void)
{
	int a = inputInt("A�� �� �и� �Է��ϼ���(����:0,����:1,��:2):");
	int b =inputInt("B�� �� �и� �Է��ϼ���(����:0,����:1,��:2):");

	if (a == 0) {
		if (b == 0) { cout << "����" << endl; }
		else if (b == 1) { cout << "���ڴ� B" << endl; }
		else { cout << "���ڴ� A" << endl; }
	}
	else if (a == 1) {
		if (b == 0) { cout << "���ڴ� A" << endl; }
		else if (b == 1) { cout << "����" << endl; }
		else { cout << "���ڴ� B" << endl; }
	}
	else {
		if (b == 0) { cout << "���ڴ� B" << endl; }
		else if (b == 1) { cout << "���ڴ� A" << endl; }
		else { cout << "����" << endl; }
	}


	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n'&&(result>=0 && result<=2)) {
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