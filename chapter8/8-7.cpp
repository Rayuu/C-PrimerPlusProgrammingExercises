#include<iostream>
using namespace std;

template<class T>T SumArray(T a[],int n);
template<typename T>T SumArray(T *a[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main()
{
	int things[6] = { 13,31,103,301,310,130 };
	struct debts mr_E[3] =
	{
		{"Ima Wolfe",2400.0},
		{"Ura Foxe",1300.0},
		{"Iby Stout",1800.0},
	};
	double *pd[3];
	for (int i = 0;i < 3;i++)
		pd[i] = &mr_E[i].amount;

	cout << "SumArray(things, 6) = " << SumArray(things, 6) << endl;
	cout << "Sumarray(pd,3) = " << SumArray(pd, 3) << endl;
	system("pause");
	return 0;
}

template<class T>T SumArray(T a[], int n)
{
	T total=0;
	for (int i = 0;i < n;i++)
		total = total + a[i];
	return total;
}
template<typename T>T SumArray(T *a[], int n)
{
	T total = 0;
	for (int i = 0;i < n;i++)
		total = total + *a[i];
	return total;
}
