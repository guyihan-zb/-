#include<iostream>
int main1()
{
	using namespace std;
	int a = 0, b = 0, c = 0;
	cout << "������С��a������" << endl;
	cin >> a;
	cout << "������С��b������" << endl;
	cin >> b;
	cout << "������С��c������" << endl;
	cin >> c;
	if (a > b)//a��b��
	{
		if (a > c)
		{
			cout << "С��a����" << endl;
		}
		else//c��a��
			cout << "С��c����" << endl;
	}
	else//b��a��
	{
		if (b > c)
		{
			cout << "С��b����" << endl;
		}
		else//c��b��
		{
			cout << "С��c����" << endl;
		}
	}
	return 0;
}
