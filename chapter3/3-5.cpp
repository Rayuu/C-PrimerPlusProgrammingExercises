#include<iostream>
using namespace std;
int main()
{
	long long person=0;
	long long all_person=0;
	double percent=0.0;
	cout << "Enter the world's population: ";
	cin >>  all_person;
	cout << "Enter the population pf the US: ";
	cin >>  person;
	percent = (float)person/all_person*100;
	cout << "The pupulation of the US is " << percent << "% of the world population." << endl;
	system("pause");
	return 0;
}