//ex19
/* A와 B 두 사람이 가위 바위 보 게임을 할 때 승자를 출력하는 프로그램을 작성하세요
가위 바위 보에 사용되는 데이터는 다음과 같습니다
가위 : 0
바위 : 1
보 : 2
예 ) A : 가위 (0) B : 바위 (1) 일 때 승자는 B
A : 보 (0) B : 바위 (1) 일 때 승자는 A
*/

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();

int main(void)
{
	int a = inputInt("A가 낼 패를 입력하세요(가위:0,바위:1,보:2):");
	int b =inputInt("B가 낼 패를 입력하세요(가위:0,바위:1,보:2):");

	if (a == 0) {
		if (b == 0) { cout << "비겼다" << endl; }
		else if (b == 1) { cout << "승자는 B" << endl; }
		else { cout << "승자는 A" << endl; }
	}
	else if (a == 1) {
		if (b == 0) { cout << "승자는 A" << endl; }
		else if (b == 1) { cout << "비겼다" << endl; }
		else { cout << "승자는 B" << endl; }
	}
	else {
		if (b == 0) { cout << "승자는 B" << endl; }
		else if (b == 1) { cout << "승자는 A" << endl; }
		else { cout << "비겼다" << endl; }
	}


	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n'&&(result>=0 && result<=2)) {
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