#include<iostream>
using namespace std;
double Cal(double temp)
{
	return 63240*temp;
}
int main()
{
	double tem;
	cout << "Enter the number of light years: ";
	cin >> tem;
	cout << tem<< " light years = "<< Cal(tem) <<" astronomical units." <<endl;
	system("pause");
	return 0;
}