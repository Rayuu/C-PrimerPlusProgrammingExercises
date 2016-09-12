#include<iostream>
using namespace std;
double Cal(double temp)
{
	return 1.8*temp+32.0;
}
int main()
{
	double tem;
	cout << "Please enter a Celsius value:";
	cin >> tem;
	cout << tem<< " degrees Celsius is "<< Cal(tem) <<" degrees Fahrenheit" <<endl;
	system("pause");
	return 0;
}