//ex24
/* ����� ���� 369 ������ �����ϰ� �ֽ��ϴ� . 369 �����̶� 1 ���� 1 �� �����ϸ� ���� ���մϴ� .
�̶� ���ؾ� �ϴ� ���� �߿� 3, 6, 9 �߿� �ϳ��� ���ԵǾ� �ִٸ� ���ڸ� ���ϴ� ��� ���ڿ�
���Ե� 3, 6, 9 �� ���� ��ŭ �ջ��� �ľ� �մϴ�
�� N �� �־��� �� 1 ���� N ���� �ùٸ��� ������ �����Ͽ��� ��� �ջ��� �� �� ���� �ƴ���
����ϴ� ���α׷��� �ۼ��ϼ���
�� ) N �� 40 �� ��� �ջ��� ģ ���� 22 */

#include<iostream>
using namespace std;
#pragma warning (disable:4996)


int inputInt(const char*);
void myflush();
int digitRecursion(int num, int *cnt);

int main(void)
{
	int num = inputInt("1�̻��� �ڿ��� �Է�:");
	int cnt = 0;
	int res;
	
	for (int i = 1; i <= num; i++)
	{
		digitRecursion(i, &cnt);	
	}

	cout << cnt << endl;

	return 0;
}

int digitRecursion(int num,int *cnt)
{
	int res;
	if (num / 10 >= 1) {
		digitRecursion(num / 10,cnt);
		res = num % 10;
		if ((res % 10) == 3 || (res % 10) == 6 || (res % 10) == 9) { (*cnt)++; }
		return 0;
	}
	else {
		if ((num % 10) == 3 || (num % 10) == 6 || (num % 10) == 9) { (*cnt)++; }
		return 0;
	}

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