#include<iostream>

using namespace std;
void Func(char *str, int n=0);
int main()
{
	char x[10]="hello";
	Func(x);
	cout<<endl;
	Func(x,5);
	cout << endl;
	Func(x,100);
	system("pause");
	return 0;
}

void Func(char *str, int n)
{
	int i;
	if(n==0)
	{
		cout<< str <<endl;
		return ;
	}
	for(i=0;i<n;i++)
	{
		cout <<str<<endl;
	}

}