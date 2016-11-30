#include<iostream>
#include<string>
using namespace std;
struct CandyBar
{
	string Brand;
	double Weight;
	int Heat;
};
void set(CandyBar & m,const char*a="Millennum Munch",const double b=2.85,const int c=350);
void show(const CandyBar &m);
int main()
{
	CandyBar candy,bar;
	set(candy);

	char *m = new char[20];
	m = "My Love";
	set(bar,m,3.5,300);

	show(candy);
	show(bar);
	system("pause");
	return 0;
}

void set(CandyBar & m,const char*a,const double b,const int c)
{
	m.Brand = a;
	m.Weight = b;
	m.Heat = c;
}

void show(const CandyBar &m)
{
	cout << "Name: " << m.Brand<<" , weight: "<<m.Weight<<" , heat: "<<m.Heat<<endl;
}

