//ex13
/* �� ���� ��ǳ��� �л� 3 ���� �ٶ��� ���� �� �ֽ��ϴ� . �л� �� N �� �־��� �� �ʿ���
��ǳ���� ����� ����ϴ� ���α׷��� �ۼ��ϼ���
�� ) �л����� 5 ���� �� �ʿ��� ��ǳ���� ����� 2 */


#include<iostream>
using namespace std;


int inputInt(const char*);
void myflush();

int main(void) {
	int cnt;
	int num = inputInt("�л����� �Է�(1���̻�):");

	cnt = num / 3 + 1;

	cout << "�ʿ��� ��ǳ�� ����� " << cnt << endl;

	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n' && result>=1) {
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