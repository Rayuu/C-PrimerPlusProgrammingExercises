#include<iostream>
using namespace std;
long long digui(long long x);

int main()
{
	long long number;
	long long sum=1;
	while(cin>>number)
	{
		cin.sync();
		if(number<0 || !cin) break;
		sum = digui(number);
		cout << number<<"!="<<sum<<endl;
	}
	system("pause");
	return 0;
}

long long digui(long long x)
{
	long long sum=1;
	if(x==0) return 1;
	if(x>0)
	{
		sum = digui(x-1)*x;
		return sum;
	}
}