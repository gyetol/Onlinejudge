//ex15
/* �� N �� �־��� �� N �� �ڸ����� ����ϴ� ���α׷��� �ۼ��ϼ���
�� ) 1234 --> 4 */

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

long long inputLonglong(const char*);
void myflush();

int main(void) {

	long long num = inputLonglong("�ڸ����� ����� 1�̻��� �ڿ��� �Է�:");
	int digit = 1;
	for(int i=10;i<=num;i*=10)
	{
		if (num / i >= 1) {
				
			digit++; 
		}
		else {
			break;
		}
	}

	cout << digit << endl;

	return 0;
}

long long inputLonglong(const char* message)
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