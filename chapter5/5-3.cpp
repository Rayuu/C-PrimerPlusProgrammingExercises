#include<iostream>
int main()
{
	using namespace std;
	int num;
	int sum=0;
	cout << "请输入第 1 个数字：（输入0则结束）"<<endl;
	cin >> num;
	sum += num;
	for(int i=2; num!=0;i++)
	{
		cout << "请输入第 " << i <<" 个数字：（输入0则结束）" << endl;
		cin >> num;
		sum+=num;
	}
	cout << "到目前为止，输入的累计和为："<< sum<< endl;
	system("pause");
	return 0;
}