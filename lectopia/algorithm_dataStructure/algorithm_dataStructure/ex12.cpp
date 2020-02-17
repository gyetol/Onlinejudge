//ex12
/* 총 지급액 N 이 주어질 때 최소지급 동전의 수를 구하는 프로그램을 작성하세요 . 지급할 수
있는 동적의 액면가는 다음과 같습니다
500, 100, 50, 10, 5, 1
예 ) 총 지급액이 1752 일 경우 500 X 3, 100 X 2, 50 X 1, 1 원 X 2 이므로 총 지급동전의 수는 8
*/

#include<iostream>
using namespace std;

int inputInt(const char*);
void myflush();

int main(void) {

	int money;
	int cnt = 0;

	money = inputInt("지급액을 입력:");

	cnt += (money / 500);
	cnt += ((money % 500) / 100);
	cnt += (((money % 500) % 100)/50);
	cnt += ((((money % 500) % 100)%50)/10);
	cnt += (((((money % 500) % 100)%50)%10)/5);
	cnt += (((((money % 500) % 100)%50)%10)%5)/1;

	cout << "동전의 개수는"<< cnt << endl;


	return 0;
}

int inputInt(const char* message)
{
	int result;

	while (1) {
		printf(message);
		scanf("%d", &result);
		if (getchar() == '\n'&& result>=0) {
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