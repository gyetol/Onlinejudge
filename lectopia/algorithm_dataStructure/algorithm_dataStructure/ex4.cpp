//ex4
/* 1���� N ������ Ȧ���� ���� for ���� �̿��Ͽ� ����� �� ���α׷��� �ۼ��ϼ��� */

#include<iostream>
using namespace std;

int inputInt(const char* message);
void myflush();

int main(void) {

	int num = inputInt("�����Է�:");
	int sum = 0;
	for (int i = 1; i <= num; i += 2)
	{
		sum += i;
	}
	printf("%d", sum);

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