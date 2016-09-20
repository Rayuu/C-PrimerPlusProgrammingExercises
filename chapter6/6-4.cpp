#include<iostream>
const int strsize=30;
const int member_count=10;
struct bop{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};
int main()
{
	using namespace std;
	char ch;
	bop member[member_count]={
		{"Tom","student","T",1},
		{"Jerry","worker","J",2},
		{"Mack","pro","M",0}
	};
	cout << "a. display by name\tb. display by title\n"
		<< "c. displya by bopname   d. display by prefence\n"
		<< "q. quit\n";
	cout << "Enter your choice: ";
	int i;
	while(cin >> ch)
	{
		cin.sync();
		switch(ch)
		{
			case 'a':
			{
				for(i=0;i<member_count && strlen(member[i].fullname)!=0;i++)
				{
					cout << member[i].fullname<<endl;
				}
				cout << "Next choice: ";
				
			}
			break;
			case 'b':
			{
				for(i=0;i<member_count && strlen(member[i].fullname)!=0;i++)
				{
					cout << member[i].title<<endl;
				}
				cout << "Next choice: ";
			}
			break;
			case 'c':
			{
				for(i=0;i<member_count && strlen(member[i].fullname)!=0;i++)
				{
					cout << member[i].bopname<<endl;
				}
				cout << "Next choice: ";
			}
			break;
			case 'd':
			{
				//int per;
				for(i=0;i<member_count && strlen(member[i].fullname)!=0;i++)
				{
					switch(member[i].preference)
					{
					case 0: cout <<member[i].fullname<<endl;break;
					case 1: cout << member[i].title<<endl;break;
					case 2: cout << member[i].bopname<<endl;break;
					}
				}
				
				cout << "Next choice: ";
			}
			break;
			case 'q':
			{
				cout << "Bye!\n";
				system("pause");
				return 0;
			}
			break;
			default:
			{
				cout << "Enter your choice: ";
				continue;
			}
			break;
		}
	}
	system("pause");
	return 0;
}