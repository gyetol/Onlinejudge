/*ex2 
1���� 9������ ���� 100���� ����� �迭�� �־����ϴ�.
�迭������ ���� ���� ����� ����, ����� ���� ����ϴ� ���α׷��� �ۼ��ϼ���.

	int ar[] = { 1, 3, 5, 4, 5, 2, 3, 5 };

���� �迭���� ���� ���� ��Ÿ���� ���� 5�̸� 3ȸ ��Ÿ���ϴ�.*/


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

	cout << "���� �迭���� ���� ���� ��Ÿ���� ����" << (idx + 1) << "�̸� " << max << "ȸ ��Ÿ���ϴ�" << endl;




	return 0;
}