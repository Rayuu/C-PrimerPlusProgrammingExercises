#include<iostream>
int main()
{
	using namespace std;
	int sum[12];
	int total=0;
	char *months[12]={"一","二","三","四","五","六","七","八","九","十","十一","十二"};
	cout << "Please enter the total books sales: "<<endl;
	for(int i=0;i<12;i++)
	{
		cout << months[i]<<" : ";
		cin >> sum[i];
		total+=sum[i];
	}
	cout << total<<endl;
	system("pause");
	return 0;
}