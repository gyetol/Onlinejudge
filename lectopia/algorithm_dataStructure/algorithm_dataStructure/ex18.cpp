//ex18
/* N�� ���� �־��� �� 1 �̻� N ������ ������ 2 ���� ���� N �� �ʰ����� �ʴ� ���� ����ϴ� ���α׷��� �ۼ��ϼ���
�� ) N �� 10 �� ��� 2 ���� ���� 10 ������ ���� 1, 2, 3 
*/

#include<iostream>
using namespace std;
#pragma warning(disable:4996)

int inputInt(const char *);
void myflush();

int main(void) {

	int num = inputInt("1�̻��� �ڿ��� �Է�:");
	int i = 1;
	while (num >= i * i)
	{
		cout << i << " , ";
		i++;
	}
	cout << "\b" << "\b"<<" "<<endl;

	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n'&& result>=1) {
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

