//ex9
/* �л��� ���� N �� �־����� N �� ���� �������� ��ȯ�ϴ� ���α׷��� �ۼ��ϼ��� . ������ ���� ������ �Ʒ��� �����ϴ�
60 �� �̸� : F
60 ~ 69 : D
70 ~ 79 : C
80 ~ 89 : B
90 ~ 100 : A
*/

#include<iostream>
using namespace std;

int inputInt(const char* message);
void myflush();

int main(void) {

	int score = inputInt("������ �Է�:");

	if (score >= 90) { cout << 'A' << endl; }
	else if (score >= 80) { cout << 'B' << endl; }
	else if (score >= 70) { cout << 'C' << endl; }
	else if (score >= 60) { cout << 'D' << endl; }
	else{ cout << 'F' << endl; }


	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n'&&(result>=0 && result<=100)) {
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

