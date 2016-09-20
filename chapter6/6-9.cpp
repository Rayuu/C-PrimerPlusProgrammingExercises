#include<iostream>
#include<string>
#include<fstream>

struct donate
{
	double money;
	std::string name;
};
int main()
{
	using namespace std;
	int people;
	string text;
	//cout << "Please enter the number of people: ";
	ifstream info;
	cout <<"Please enter the file name: \n";
	cin >> text;
	info.open(text);
	while(!info.is_open())
	{
		cout << "The file name error\n";
		cout <<	"Please enter the file name: \n";
		cin >> text;
		info.open(text);
	}
	cout <<"Open successful!\n";

	info >> people;
	//cout << people;
	donate *abc = new donate[people];
	int i;
	for(i=0;i<people;i++)
	{
		info.get();
		getline(info,abc[i].name);
		info>>abc[i].money;
	}
	cout <<endl;
	cout << "The important of people(Grand Patrons):\n";
	int j=0;
	for(i=0;i<people;i++)
	{
		if(abc[i].money>=10000)
		{
			cout << abc[i].name<< "\t";
			cout << abc[i].money<< endl;
			j++;
		}
	}
	if(j==0)
	{
		cout << "None\n";
	}
	cout << "Patrons:\n";
	j=0;
	for(i=0;i<people;i++)
	{
		if(abc[i].money<10000)
		{
			cout << abc[i].name<< "\t";
			cout << abc[i].money<< endl;
			j++;
		}
		
	}
	if(j==0)
	{
		cout << "None\n";
	}

	system("pause");
	return 0;
}