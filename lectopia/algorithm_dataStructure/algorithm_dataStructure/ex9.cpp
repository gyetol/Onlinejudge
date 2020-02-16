//ex9
/* 학생의 점수 N 이 주어질때 N 의 값을 학점으로 변환하는 프로그램을 작성하세요 . 점수에 따른 학점은 아래와 같습니다
60 점 미만 : F
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

	int score = inputInt("점수를 입력:");

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

