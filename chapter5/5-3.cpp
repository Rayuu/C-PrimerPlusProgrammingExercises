#include<iostream>
int main()
{
	using namespace std;
	int num;
	int sum=0;
	cout << "������� 1 �����֣�������0�������"<<endl;
	cin >> num;
	sum += num;
	for(int i=2; num!=0;i++)
	{
		cout << "������� " << i <<" �����֣�������0�������" << endl;
		cin >> num;
		sum+=num;
	}
	cout << "��ĿǰΪֹ��������ۼƺ�Ϊ��"<< sum<< endl;
	system("pause");
	return 0;
}