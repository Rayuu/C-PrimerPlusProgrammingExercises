#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	char temp[]=", ";
	char firstname[20],lastname[20];
	cout << "Enter your first name: ";
	cin.getline(firstname,20);
	cout << "Enter your last name: ";
	cin.getline(lastname,20);
	strcat(firstname,temp);
	strcat(firstname,lastname);
	cout <<"Here's the infomation in a single string :" << firstname << endl;
	system("pause");
	return 0;

}