#include<iostream>
int main()
{
	using namespace std;
	int i,j,k;
	int num;
	cout << "Enter number of rows: ";
	cin >> num;
	for(i=1;i<=num;i++)
	{
		for(j=0;j<num-i;j++)//num-i   5-1 5-2 5-3 5-4 5-5
		{
			cout << ".";
		}
		for(k=0;k<i;k++)//1 2 3 4 5
		{
			cout << "*";	
		}
		cout << endl;
	}
	system("pause");
	return 0;
}