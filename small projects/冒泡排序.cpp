#include<iostream>
int main5()
{
	using namespace std;
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "����ǰ:  "<<endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	//��ʼð��
	//����������=Ԫ�ظ���-1
	//ÿ�ֶԱȴ���=Ԫ�ظ���-��������-1
	for (int i = 0; i < 9 - 1; i++)
	{
		for (int j = 0; j < 9 - i-1 ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] =  temp;
			}
		}
	}
	cout << "�����   "<< endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << "  ";
	}
    cout << endl;
	return 0;
}