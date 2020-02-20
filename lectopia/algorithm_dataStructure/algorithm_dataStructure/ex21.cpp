//ex21
/* N�� ���� �־��� �� �� �ڸ��� ���� ����ϴ� ���α׷��� �ۼ��ϼ���
�� ) N �� ���� 512 �� ����� ���
5
1
2
*/

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();
int outputDigit(int num);
int tenExp(int num);


int main(void)
{
	int num = inputInt("1�̻��� �ڿ��� �Է�:");
	int digit = outputDigit(num);

	for (int i = digit-1; i >= 0; i--)
	{
		cout << num / tenExp(i) << endl;
		num = num - (num / tenExp(i)*tenExp(i));
	}



	return 0;
}

int tenExp(int num) {
	int res=1;
	for (int i = 1; i <= num; i++)
	{
		res *= 10;
	}
	return res;
}

int outputDigit(int num)
{
	int cnt = 0;
	for (int i = 1; i <= num; i *= 10)
	{
		if (num / i >= 1)
		{
			cnt++;
		}
	}

	return cnt;
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