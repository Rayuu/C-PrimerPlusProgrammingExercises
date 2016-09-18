#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	int i;
	char word[30];
	cin >> word;
	for(i=0;strcmp(word,"done");i++)
	{
		cin >> word;
	}
	cout << i<<endl;
	system("pause");
	return 0;
}