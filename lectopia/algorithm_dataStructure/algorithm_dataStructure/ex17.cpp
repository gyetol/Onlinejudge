//ex17
/*  100�̻��� �� N �� �־��� �� 100 �̸��� ���� ������ ���� ����ϴ� ���α׷��� �ۼ��ϼ���
�� ) 1234 --> 1200 
*/

#include<iostream>
#pragma warning (disable:4996)
using namespace std;

int inputInt(const char*);
void myflush();


int main(void) {

	int num = inputInt("���ڸ� �Է��ϼ���:");
	cout << num / 100 * 100 << endl;

	return 0;
}


int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n'&&result>=100) {
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