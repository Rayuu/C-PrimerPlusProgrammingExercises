#include<iostream>
using namespace std;
int main()
{
	long sec=0;
	long days=0,hours=0,minutes=0,seconds=0;
	const int da=24,ho=60,mi=60,se=60;
	cout << "Enter the number of seconds: ";
	cin >> sec;
	seconds = sec%se;
	minutes = sec%(se*mi)/mi;
	hours = sec/ho/mi%mi;
	days = sec/da/ho/mi;
	cout << sec << " seconds = "<< days << "days, " 
		<< hours << " hours, " 
		<< minutes << "minutes, " 
		<< seconds << "seconds."<< endl;
	system("pause");
	return 0;
}