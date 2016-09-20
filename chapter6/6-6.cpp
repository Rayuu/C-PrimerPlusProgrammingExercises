#include<iostream>
#include<string>
struct donate
{
	double money;
	std::string name;
};
int main()
{
	using namespace std;
	int people;
	cout << "Please enter the number of people: ";
	
	while(!(cin>>people))
	{
		cin.clear();
		cin.sync();
	}
	donate *abc =new donate[people];
	int i;
	for(i=0;i<people;i++)
	{
		cin.sync();
		cout<< "Enter the name of people: ";
		getline(cin,abc[i].name);
		cout << "The money : ";
		cin >>abc[i].money;
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