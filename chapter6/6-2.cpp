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
	cout << "�� 1���� ";
	for(i=0;i<10 && cin >> ch[i];i++)
	{
		sum+=ch[i];
		if(i==9)break;
		cout << "�� "<<i+2<<"���� ";
	}
	cout <<"��: "<< sum<<endl;
	ave=sum/MAX;
	cout <<"ƽ��ֵ: " <<ave<<endl;
	int j,count=0;
	for(j=0;j<MAX;j++)
	{
		if(ave<ch[j])
		{
			count++;
			//cout << ch[j]<< endl;
		}
	}
	cout << "һ����"<< count<<"�����ֱ�ƽ��ֵ��"<<endl;
	system("pause");
	return 0;
}