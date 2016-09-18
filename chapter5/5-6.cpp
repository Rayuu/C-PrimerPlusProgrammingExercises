#include<iostream>
int main()
{
	using namespace std;

	int total[3][12];
	int sum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<12;j++)
		{
			cout << i+1<< ", "<<j+1<<": ";
			cin >> total[i][j];
			sum+=total[i][j];
		}
	}
	cout << sum<<endl;
	system("pause");
	return 0;
}