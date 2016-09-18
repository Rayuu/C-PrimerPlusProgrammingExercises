#include<iostream>
int main()
{
	using namespace std;
	int a,b;
	int sum=0;
	cout << "Please enter two numbers: \n";
	cin >> a;
	cin >> b;
	if(a>b)
	{
		int temp;
		temp=b;
		b=a;
		a=temp;
	}
	for(int i=a;i<=b;i++)
	{
		
		sum += i;
	}
	cout << "The sum is : "<< sum << endl;
	system("pause");
	return 0;
}