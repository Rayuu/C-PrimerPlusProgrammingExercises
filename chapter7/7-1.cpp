#include<iostream>
using namespace std;
double ave(double a,double b);
double res(double x,double y);
int main()
{
	
	double a,b;
	while(cin)//一直输入两个数
	{
		cout << "Please enter number A: ";
		cin >> a;
		cout << "Please enter number B: ";
		cin >> b;
		double x=res(a,b);
		if(x==2)
		{
			cout << "data error!";
			continue;
		}
		else if(x==0)
		{
			cout << "You enter the 0 ,program end!\n";
			cin.sync();
			cin.get();
			return 0;
		}
		else 
		{
			cout << "调和平均数为："<< ave(a,b)<<endl<<endl;
			cout << "Please enter two numbers again! 0 end\n";
		}
		cin.sync();
	}
	system("pause");
	return 0;
}
double ave(double a,double b)//计算调和平均数
{
	double ave=0.0;
	ave = 2.0*a*b/(a+b);
	return ave; 

}
double res(double x,double y)//返回结果
{
	if(x==0) return 0;
	else if(!cin)
	{
		cin.clear();
		cin.sync();
		return 2;
	}
	if(y==0)return 0;
	else if(!cin)
	{
		cin.clear();
		cin.sync();
		return 2;
	}
	else return 1;
}