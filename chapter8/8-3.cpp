#include<iostream>
#include<string>
using namespace std;
string upper(string&);
int main()
{
	cout << "Enter a string (q to quit): ";
	string a;
	getline(cin,a);
	while(a != "q")
	{
		cout << upper(a)<<endl;
		cout << "Next string (q to quit): ";
		getline(cin,a);
	}
	cout << "Bye."<<endl;
	system("pause");
	return 0;
}

string upper(string &a)
{
	for(int i=0;a[i];i++)
	{
		a[i] = toupper(a[i]);
	}
	return a;
}
