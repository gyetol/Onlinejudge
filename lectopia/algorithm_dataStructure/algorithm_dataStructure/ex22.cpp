//ex22
/* 제품가격 N 과 회원등급 M 이 주어질 때 회원 등급에 따른 실제 판매가를 출력하는 프로그램
을 작성하세요
회원등급에 따른 할인율은 아래와 같습니다
등급 할인율
1 25
2 20
3 15
4 10
그 외 0
예 ) 제품가격이 10000 이며 회원등급이 4 인 경우 실제 판매가는 9000 */

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

#define FIRST 0.75
#define SECOND 0.8
#define THIRD 0.85
#define FOURTH 0.9


int inputInt(const char*);
void myflush();

int main(void)
{
	int price = inputInt("제품 가격을 입력하세요:");
	int level;
	while (true) {
		level = inputInt("회원 등급을 입력하세요(1~5):");

		if (level < 1 || level>5) {
			cout << "잘못입력하셨습니다. 1~5등급까지 있습니다." << endl;
		}
		else { break; }
	}
	
	switch (level)
	{
	case 1: cout << "가격은 " << price * FIRST << "원입니다." << endl; break;
	case 2: cout << "가격은 " << price * SECOND << "원입니다." << endl; break;
	case 3: cout << "가격은 " << price * THIRD << "원입니다." << endl; break;
	case 4: cout << "가격은 " << price * FOURTH << "원입니다." << endl; break;
	default: cout << "가격은 " << price << "원입니다." << endl; break;
	}



	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n'&&result>=0) {
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