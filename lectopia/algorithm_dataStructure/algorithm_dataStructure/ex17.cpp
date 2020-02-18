//ex17
/*  100이상의 값 N 이 주어질 때 100 미만의 값을 제외한 값을 출력하는 프로그램을 작성하세요
예 ) 1234 --> 1200 
*/

#include<iostream>
#pragma warning (disable:4996)
using namespace std;

int inputInt(const char*);
void myflush();


int main(void) {

	int num = inputInt("숫자를 입력하세요:");
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