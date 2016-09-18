#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	int i;
	string word;
	cin >> word;
	for(i=0;word!="done";i++)
	{
		cin >> word;
	}
	cout << i<<endl;
	system("pause");
	return 0;
}