//ex3
/*총 지급액 N 이 주어지고 지급할 동전의 액면가 M 이 주어질 때 
총 지급하여야 하는 동전의 수를 출력하 는 프로그램을 작성하세요
예 ) 총 지급액 N 이 1700 이고 지급 동전의 액면가 M 이 500 일때 
총 지급되어야 하는 동전의수는 4 이다*/

#include<iostream>
using namespace std;

int main(void) {

	int N = 1700;
	int M = 500;
	int cnt;

	cnt = N / M + 1;

	printf("%d", cnt);


	return 0;
}