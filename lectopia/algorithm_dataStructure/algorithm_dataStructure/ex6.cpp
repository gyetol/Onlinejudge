//ex6
/* 2020����� 3020 �� ������ ������ �Ǵ� �⵵�� ����ϼ��� . ���� �� ��Ģ�� �Ʒ��� ����
�� �⵵�� 4 �� ������ �������� 0 �̸� ����
�� �⵵�� 100 ���� ������ �������� 0 �̸� ���
�� �⵵�� 400 ���� ������ �������� 0 �̸� ���� */

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