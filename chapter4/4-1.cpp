#include<iostream>
#include<string>

int main()
{
	using namespace std;
	string firstname;
	char grade;
	int age;
	string lastname;
	//input firstname
	cout << "What is your first name? ";
	getline(cin,firstname);
	//input lastname
	cout << "What is your last name? ";
	cin >> lastname;
	//input grade
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	//input age
	cout << "What is your age? ";
	cin >> age ;
	//print
	cout << "Name: " << lastname <<" " << firstname << endl;
	cout << "Grade: " << (char)(grade+1) << endl;
	cout << "Age: " << age << endl;
	system("pause");
	return 0;
}