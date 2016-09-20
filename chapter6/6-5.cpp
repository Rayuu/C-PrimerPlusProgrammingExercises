#include<iostream>
int main()
{
	using namespace std;
	double money,tax;
	while(cout<< "money: " && cin>>money)
	{
		if(money<0)break;
		else if(money<=5000)
		{
			tax=5000*0;
			cout << "tax= "<< tax <<endl;
		}
		else if(money>5001 && money<=15000)
		{
			money=money-5000;
			tax=money*0.1;
			
			cout << "tax= "<< tax <<endl;
		}
		else if(money>15001 && money<=35000)
		{
			money=money-15000;
			tax=1000+money*0.15;
			
			cout << "tax= "<< tax <<endl;
		}
		else if(money>35000)
		{
			money=money-35000;
			tax=4000+money*0.2;
			
			cout << "tax= "<< tax <<endl;
		}
		continue;
	}
	system("pause");
	return 0;
}