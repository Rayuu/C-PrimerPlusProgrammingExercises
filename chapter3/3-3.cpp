#include<iostream>
using namespace std;
int main()
{
	float degree,min,sec;
	const float mi=60,se=60;
	cout << "������ȷ��룬�Կո�������: ";
	cin >> degree;
	cin >> min;
	cin >> sec;
	cout << degree+min/mi+sec/mi/se << "��" << endl;
	system("pause");
	return 0;
}