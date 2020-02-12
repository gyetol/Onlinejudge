/*ex2 
1부터 9까지의 수가 100개가 저장된 배열이 주어집니다.
배열내에서 가장 많이 저장된 값과, 저장된 수를 출력하는 프로그램을 작성하세요.

	int ar[] = { 1, 3, 5, 4, 5, 2, 3, 5 };

위의 배열에서 가장 많이 나타나는 값은 5이며 3회 나타납니다.*/


#include<iostream>
#pragma warning (disable:4996)
using namespace std;

int main(void) {
	int arr[] = { 1, 3, 5, 4, 5, 2, 3, 5 };
	int ar[10] = { 0, };
	int max = 0;
	int idx = 0;
	
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		ar[arr[i] - 1]++;
	}

	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
	{
		if (ar[i] > max) {
			max = ar[i];
			idx = i;
		}
	}

	cout << "위의 배열에서 가장 많이 나타나는 수는" << (idx + 1) << "이며 " << max << "회 나타납니다" << endl;




	return 0;
}