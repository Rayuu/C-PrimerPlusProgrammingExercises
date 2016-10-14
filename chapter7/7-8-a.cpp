#include<iostream>
using namespace std;

const int Seasons = 4;
void fill(double *expenses,const char Snames[][20]);
void show(double * expenses, const char Snames[][20]);
int main()
{
	const char snames[Seasons][20] = {"Spring","Summer","Fall","Winter"};
	const char (*Snames)[20]=snames;
	double expenses[Seasons];
	fill(expenses,Snames);
	show(expenses,Snames);
	system("pause");
	return 0;
}
void fill(double *expenses,const char Snames[][20])
{
	for(int i=0;i<Seasons;i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> expenses[i];

	}
}

void show(double * expenses, const char Snames[][20])
{
	double total = 0;
	cout << "\n-----------\n";
	for(int i=0;i< Seasons;i++)
	{
		cout << Snames[i] << " expense: "<<expenses[i]<<endl;
		total += expenses[i];
	}
	cout << "Total expenses: "<< total << endl;
}