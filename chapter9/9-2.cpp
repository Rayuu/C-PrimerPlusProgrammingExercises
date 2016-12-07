#include<iostream> 
#include<string>

//const int ArSize = 10;
//void strcount(const char * str);
void strcount(const std::string str);

int main()  
{  
	using namespace std;
	//char input[ArSize];
	//char next;
	string input;
    cout <<"Enter a line:\n";
	//cin.get(input,ArSize);
	getline(cin,input);
	//while(cin)
	while(input!="")
	{
		//cin.get(next);
		strcount(input);
		//while(next != '\n')
		//	cin.get(next);
		//strcount(input);
		cout << "Enter next line:\n";
		//cin.get(input,ArSize);
		getline(cin,input);
	}
	cout << "Bye\n";

    system("pause");  
    return 0;  
}  

//void strcount(const char *str)
void strcount(const std::string str)
{
	using namespace std;
	static int total = 0;
	//int count =0;
	int count = str.length();
	//cout << "\"" << str << "\"contains" ;
	//while(*str ++)
	//{
	//	count ++;
	//}
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}