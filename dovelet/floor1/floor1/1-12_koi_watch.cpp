#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int hour, min, sec;
	int cooktime;
	int h, m, s;

	scanf("%d%d%d%d", &hour, &min, &sec, &cooktime);

	h = cooktime / 3600;
	hour += h;
	hour %= 24;
	m = cooktime % 3600 / 60;
	min += m;
	if (min >= 60) { 
		hour += 1;
		min -= 60;
	}
	s = cooktime % 3600 % 60;
	sec += s;
	if (sec >= 60) {
		min += 1;
		sec -= 60;
	}

	//hour += cooktime / 3600;
	//if(hour>=24){}
	//min += (cooktime - cooktime / 3600 * 3600) / 60;
	//sec += cooktime - ((cooktime - cooktime / 3600 * 3600) / 60 * 60);

	//if (sec >= 60) { 
	//	min += 1; 
	//	sec -= 60;
	//}
	//if (min >= 60) { 
	//	hour += 1; 
	//	min -= 60;
	//}
	
	printf("%d %d %d", hour, min, sec);
	return 0;
}
///////////////////////////////////////////////////
/*
	1.60단위로 나누어 각각의 시 분 초를 구하는 것까지는 좋았으나, 
	기존시각에 구한 시 분 초를 더하면 60이 다시 초과할 수 있기때문에 이 부분을 신경써야한다.

	2. 24시를 넘어갔을 경우 0시로 돌아온다.

	3. 변수개수를 좀 늘리면 코드가 깔끔해질 수 있다

	4. 나머지 연산자활용


*/
///////////////////////////////////////////////////