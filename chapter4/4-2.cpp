#include<iostream>
#include<string>

int main()
{
	using namespace std;
	//const int Arsize = 20;
	//char name[Arsize];
	//char dessert[Arsize];
	string name,dessert;
	cout << "Enter your name:\n";
	getline(cin,name);
	//cin.getline(name,Arsize);
	cout << "Enter your favorite dessert:\n";
	getline(cin,dessert);
	//cin.getline(dessert,Arsize);
	cout << "I have some delicious " << dessert ;
	cout << " for you, " << name << ".\n";
	system("pause");
	return 0;

}