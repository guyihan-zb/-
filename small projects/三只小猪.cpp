#include<iostream>
int main1()
{
	using namespace std;
	int a = 0, b = 0, c = 0;
	cout << "请输入小猪a的体重" << endl;
	cin >> a;
	cout << "请输入小猪b的体重" << endl;
	cin >> b;
	cout << "请输入小猪c的体重" << endl;
	cin >> c;
	if (a > b)//a比b重
	{
		if (a > c)
		{
			cout << "小猪a最重" << endl;
		}
		else//c比a重
			cout << "小猪c最重" << endl;
	}
	else//b比a重
	{
		if (b > c)
		{
			cout << "小猪b最重" << endl;
		}
		else//c比b重
		{
			cout << "小猪c最重" << endl;
		}
	}
	return 0;
}
