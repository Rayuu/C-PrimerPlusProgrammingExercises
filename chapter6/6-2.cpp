#include<iostream>
#include<cctype>
#include<array>
const int MAX=10;
int main()
{
	using namespace std;
	//double ch[MAX];
	array<double,MAX>ch;
	double sum=0.0;
	double ave=0.0;
	int i;
	cout << "第 1个： ";
	for(i=0;i<10 && cin >> ch[i];i++)
	{
		sum+=ch[i];
		if(i==9)break;
		cout << "第 "<<i+2<<"个： ";
	}
	cout <<"和: "<< sum<<endl;
	ave=sum/MAX;
	cout <<"平均值: " <<ave<<endl;
	int j,count=0;
	for(j=0;j<MAX;j++)
	{
		if(ave<ch[j])
		{
			count++;
			//cout << ch[j]<< endl;
		}
	}
	cout << "一共有"<< count<<"个数字比平均值大"<<endl;
	system("pause");
	return 0;
}