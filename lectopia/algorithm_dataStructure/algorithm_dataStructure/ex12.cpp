//ex12
/* �� ���޾� N �� �־��� �� �ּ����� ������ ���� ���ϴ� ���α׷��� �ۼ��ϼ��� . ������ ��
�ִ� ������ �׸鰡�� ������ �����ϴ�
500, 100, 50, 10, 5, 1
�� ) �� ���޾��� 1752 �� ��� 500 X 3, 100 X 2, 50 X 1, 1 �� X 2 �̹Ƿ� �� ���޵����� ���� 8
*/

#include<iostream>
using namespace std;

int inputInt(const char*);
void myflush();

int main(void) {

	int money;
	int cnt = 0;

	money = inputInt("���޾��� �Է�:");

	cnt += (money / 500);
	cnt += ((money % 500) / 100);
	cnt += (((money % 500) % 100)/50);
	cnt += ((((money % 500) % 100)%50)/10);
	cnt += (((((money % 500) % 100)%50)%10)/5);
	cnt += (((((money % 500) % 100)%50)%10)%5)/1;

	cout << "������ ������"<< cnt << endl;


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