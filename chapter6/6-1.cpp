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
		if(isalpha(ch))//�ж���ĸ
		{
			if(islower(ch))//Сд���д
			{
				//ch=toupper(ch);ch=ch-32
				cout << (char)toupper(ch);
			}
			else if(isupper(ch))//��д��Сд
			{
				//ch=ch+32
				cout <<(char)tolower(ch);
			}
		}
		else if(!isdigit(ch))//��������ֱ�����
			cout <<ch;
		//else;
		cin.get(ch);
		//cin >> ch;
	}
	
	system("pause");
	return 0;
}