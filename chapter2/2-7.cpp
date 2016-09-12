#include<iostream>
using namespace std;
int Cal(int hour,int min)
{
	cout << "Time: " << hour << ":" << min << endl;
	return 0;
}
int main()
{
	int hours,mins;
	cout << "Enter the number of hours:";
	cin >> hours;
	cout << "Enter the number of minutes:";
	cin >> mins;
	Cal(hours,mins);
	system("pause");
	return 0;
}