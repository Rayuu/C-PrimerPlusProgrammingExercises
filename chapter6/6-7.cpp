#include<iostream>
#include<string>

int main()
{
	using namespace std;
	string a;
	cout << "Enter words (q to quit): \n";
	cin >> a;
	int count=0,other=0,yuan=0;
	while(a!="q")
	{
		if(isalpha(a[0]))
		{
			if(a[0]== 'a' || a[0]=='e' || a[0]=='i' || a[0]=='o' || a[0]=='u' || a[0]=='A' || a[0]=='E' || a[0]=='I' || a[0]=='O' || a[0]=='U')
			{
				yuan++;
			}
			else count++;
		}
		else other++;
		cin >> a;
	}
	cout << yuan<<" words beginning with vowels"<<endl;
	cout <<count<<" words beginning with consonants"<<endl;
	cout <<other<<" others"<<endl;
	system("pause");
	return 0;
}