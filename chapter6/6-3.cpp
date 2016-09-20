#include<iostream>

int main()
{
	using namespace std;
	char ch;
	cout << "Please enter one of the following choices:\n";
	cout << "c) carnivore\tp) pianist\nt) tree\t\tg) game\n";
	while(cin>>ch)
	{
		cin.sync();
		switch(ch)
		{
			case 'c':
				{
					cout << ch<<endl;
				}
				break;
			case 'p':
				{
					cout << ch<<endl;
				}
				break;
			case 't':
				{
					cout << ch<<endl;
				}
				break;
			case 'g':
				{
					cout << ch<<endl;
				}
				break;
			default:
				{
					cout << "Please enter a c, p, t, or g: ";
					continue;
				}
				break;
			
		}
	}
	system("pause");
	return 0;
}