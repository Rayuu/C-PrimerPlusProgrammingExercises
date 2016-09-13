#include<iostream>
using namespace std;
int main()
{
	float degree,min,sec;
	const float mi=60,se=60;
	cout << "请输入度分秒，以空格来区分: ";
	cin >> degree;
	cin >> min;
	cin >> sec;
	cout << degree+min/mi+sec/mi/se << "度" << endl;
	system("pause");
	return 0;
}