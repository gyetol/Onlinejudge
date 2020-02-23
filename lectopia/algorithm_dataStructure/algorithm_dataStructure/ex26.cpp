//ex26
/* 당신은 여행중에 있으며 A 호텔에 장기간 10 일간 머무를 예정입니다
A 호텔의 요금은 3 일동안 숙박할 수 있는 기간요금과 당일 하루만 숙박할 수 있는 일일요금이 있습니다
가장 저렴하게 10 일동안 투숙할 수 있는 요금을 구하는 프로그램을 작성하세요
예) 3 일 숙박요금이 3000 원이며 1 일 숙박요금이 900 원이라면
1 일 숙박요금 (M) 900 원 X 10 매 즉 9000 원이 가장 저렴하게 숙박할 수 있는 요금이 됩니다
예) 3 일 숙박요금이 3000 원이며 1 일 숙박요금이 1100 원이라면
3 일 숙박요금 (N) 3000 원 X 3 매 + 1 일 숙박요금 (M) X 1 매 즉 10100 원이 가장 저렴하게 숙박할 수 있는 요금이 됩니다*/

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int inputInt(const char*);
void myflush();

int main(void)
{
	int feePer3days, feePer1day;
	feePer3days = inputInt("3일 숙박요금 입력:");
	feePer1day = inputInt("1일 숙박요금 입력:");

	if (feePer1day * 3 > feePer3days) { cout << feePer3days * 3 + feePer1day << "원이 최저숙박요금입니다.(3일권 3장,1일권 1장을 이용하세요)" << endl; }
	else { cout << feePer1day * 10 << "원이 최저숙박요금입니다. (1일권 10장을 이용하세요)" << endl; }


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