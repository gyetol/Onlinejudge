//ex5
/*  1���� N ������ ¦���� ���� while ���� �̿��Ͽ� ����� �� ���α׷��� �ۼ��ϼ��� */

#include<iostream>
#pragma warning(disable:4996)
using namespace std;

int inputInt(const char* message);
void myflush();

int main(void) {

	int num = inputInt("�����Է�:");
	int sum = 0;
	int i = 2;
	while (i <= num)
	{
		sum += i;
		i+=2;
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