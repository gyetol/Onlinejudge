//ex18
/* N의 값이 주어질 때 1 이상 N 이하의 값에서 2 승의 값이 N 을 초과한지 않는 값을 출력하는 프로그램을 작성하세요
예 ) N 이 10 인 경우 2 승의 값이 10 이하인 값은 1, 2, 3 
*/

#include<iostream>
using namespace std;
#pragma warning(disable:4996)

int inputInt(const char *);
void myflush();

int main(void) {

	int num = inputInt("1이상의 자연수 입력:");
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
			printf("잘못된 입력입니다.\n");
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

