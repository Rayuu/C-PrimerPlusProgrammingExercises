#include<iostream>
#include<fstream>
#include<string>
int main()
{
	using namespace std;
	int word=0;
	char b;
	string text;
	ifstream abc;
	cout <<"Please enter the name of file: ";
	cin >> text;
	abc.open(text);
	while(!abc.is_open())
	{
		cout << "The file name error\n";
		cout <<"Please enter the name of file: ";
		cin >> text;
		abc.open(text);
	}
	while(abc.get(b))
	{
		word++;
	}
	cout << "Word= "<< word<<endl;
	system("pause");
	return 0;
}