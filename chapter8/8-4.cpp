#include<iostream>
#include<cstring>
using namespace std;
struct stringy
{
	char * str;
	int ct;
};
void set(stringy &,char * );
void show(const stringy&a,int b=1);
void show(const char *a,int b=1);
int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany,testing);
	show(beany);
	show(beany,2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing,3);
	show("Done!");
	system("pause");
	return 0;
}

void set(stringy &m,char * a)
{
	m.ct = strlen(a) + 1;
	m.str = new char[m.ct];
	strcpy_s(m.str,m.ct,a);//¸´ÖÆ¿Õ¸ñ
}

void show(const stringy&a,int b)
{
	for (int i=0;i<b;i++)
		cout << a.str<<endl;
}

void show(const char *a,int b)
{
	for (int i=0;i<b;i++)
	{
		cout << a << endl;
	}
}
