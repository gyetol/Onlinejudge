//ex14
/* 한 개의 선풍기는 학생 3 명에게 바람을 보낼 수 있습니다 . 현재 4 개의 선풍기가 있는 상태입니다 . 
학생 수 N 이 주어질 때 추가적으로 필요한 선풍기의 대수를 출력하는 프로그램을 작성하세요
예 ) 학생수가 14 명 일때 추가적으로 필요한 선풍기의 수는 1 */

#include<iostream>
using namespace std;


int inputInt(const char*);
void myflush();

int main(void) {
	int cnt;
	int num = inputInt("학생수를 입력(1명이상):");

	cnt = (num-12)/3+1;

	cout << "필요한 선풍기 대수는 " << cnt << endl;

	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n' && result >= 1) {
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