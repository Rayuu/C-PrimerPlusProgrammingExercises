#include<iostream>
#include<string>
#include<cstring>
//ע�Ͳ���Ϊ4-3
//���ԶԱ�
int main()
{
	using namespace std;
	string temp=", ";
	string firstname,lastname;
	//char temp[]=", ";
	//char firstname[20],lastname[20];
	cout << "Enter your first name: ";
	getline(cin,firstname);
	//cin.getline(firstname,20);
	cout << "Enter your last name: ";
	getline(cin,lastname);
	//cin.getline(lastname,20);
	//strcat(firstname,temp);
	//strcat(firstname,lastname);
	firstname +=temp;
	firstname +=lastname;
	cout <<"Here's the infomation in a single string :" << firstname << endl;
	system("pause");
	return 0;

}