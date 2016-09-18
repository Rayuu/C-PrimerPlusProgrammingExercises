#include<iostream>
#include<string>
struct car
{
	std::string oem;
	int year;
};
int main()
{
	using namespace std;

	int num;
	cout << "How many cars do you wish to catalog? ";
	cin >> num;
	car *str = new car[num];
	for(int i=0;i<num;i++)
	{
		cin.get();
		cout << "Car #"<< i+1<<endl;
		cout << "Please enter the make: ";
		getline(cin,str[i].oem);
		cout << "Please enter the year made: ";
		cin >> str[i].year;
		//cin.get();
	}
	cout << "Here is your collection: \n";
	for(int j=0;j<num;j++)
	{
		cout << str[j].year <<" "<< str[j].oem << endl;
	}

	system("pause");
	return 0;
}