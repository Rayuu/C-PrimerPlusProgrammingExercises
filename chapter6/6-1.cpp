#include<iostream>
#include<cctype>
int main()
{
	using namespace std;
	char ch;
	//cin >> ch;
	cin.get(ch);
	while(ch != '@')
	{
		if(isalpha(ch))//判断字母
		{
			if(islower(ch))//小写变大写
			{
				//ch=toupper(ch);ch=ch-32
				cout << (char)toupper(ch);
			}
			else if(isupper(ch))//大写变小写
			{
				//ch=ch+32
				cout <<(char)tolower(ch);
			}
		}
		else if(!isdigit(ch))//不是数字直接输出
			cout <<ch;
		//else;
		cin.get(ch);
		//cin >> ch;
	}
	
	system("pause");
	return 0;
}