#include<iostream>
using namespace std;

double add(double x,double y)
{
	return x+y;
}

double jian(double x, double y)  
{  
    return x-y;  
} 
double calculate(double x, double y, double(*com)(double, double))  
{  
    double xx = com(x, y);  
    return xx;  
}  
int main()
{
	double x,y;
	cout << "请输入两个数字: "<<endl;
	double(*m[2])(double,double) = {add,jian};
	while(cin >>x>>y)
	{
		for(int i=0;i<2;i++)
		{
			if(i==0)
			{
				cout << "add: " << calculate(x,y,*m[i])<<endl;

			}
			else
			{
				cout << "cha: "<<calculate(x,y,*m[i])<<endl;
			}
		}
		cout << "请输入两个数字: "<<endl;
	}
	cout << "Done."<<endl;
	system("pause");
	return 0;
}