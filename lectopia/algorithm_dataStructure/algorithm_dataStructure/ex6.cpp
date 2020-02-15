//ex6
/* 2020년부터 3020 년 사이의 윤년이 되는 년도를 출력하세요 . 윤년 의 규칙은 아래와 같다
ㅇ 년도를 4 로 나누어 나머지가 0 이면 윤년
ㅇ 년도를 100 으로 나누어 나머지가 0 이면 평년
ㅇ 년도를 400 으로 나누어 나머지가 0 이면 윤년 */

#include<iostream>
using namespace std;
#pragma warning (disable:4996)

int main(void) {

	for (int i = 2020; i <= 3020; i++)
	{
		bool tf = false;
		if (i % 4 == 0)
		{
			tf = true;
			if (i % 100 == 0)
			{
				tf = false;
				if (i % 400 == 0)
				{
					tf = true;
				}
				
			}
			
		}
		if (tf == true) {
			cout << i << " ";
		}
	}

	return 0;
}