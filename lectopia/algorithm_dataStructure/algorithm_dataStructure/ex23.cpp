//ex23
/* 1���� 10 ������ ���� �Ʒ��� ������ ����ϴ� ���α׷��� �ۼ��ϼ���
1 10 2 9 3 8 4 7 5 6
*/

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();

int main(void)
{
	int num = inputInt("1�̻��� �ڿ����Է�:");
	
	if (num % 2 == 0) {

		for (int i = 1; i <= (num / 2); i++)
		{
			cout << i << "    " << (num - i + 1) << "    ";
		}
	}
	else {
		for (int i = 1; i <= (num / 2); i++)
		{
			cout << i << "    " << (num - i + 1) << "    ";
		}
		cout << num / 2 + 1;
	}
	

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