//ex24
/* 당신은 지금 369 게임을 진행하고 있습니다 . 369 게임이란 1 부터 1 씩 증가하며 값을 말합니다 .
이때 말해야 하는 숫자 중에 3, 6, 9 중에 하나라도 포함되어 있다면 숫자를 말하는 대신 숫자에
포함된 3, 6, 9 의 개수 만큼 손뼉을 쳐야 합니다
값 N 이 주어질 때 1 부터 N 까지 올바르게 게임을 진행하였을 경우 손뼉을 총 몇 번을 쳤는지
출력하는 프로그램을 작성하세요
예 ) N 이 40 인 경우 손뼉을 친 수는 22 */

#include<iostream>
using namespace std;
#pragma warning (disable:4996)


int inputInt(const char*);
void myflush();
int digitRecursion(int num, int *cnt);

int main(void)
{
	int num = inputInt("1이상의 자연수 입력:");
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