#include<iostream>
#include<array>
int main()
{
	using namespace std;
	array<double,3> grade;
	//1、一次一次手动输入
	/*
	cout << "Please enter your grade: \n";
	cout << "The first time: ";
	cin >> grade[0];
	cout << "The second time: ";
	cin >> grade[1];
	cout << "The third time: ";
	cin >> grade[2];
	cout << "The average grade is : " << (grade[0]+grade[1]+grade[2])/3<< endl ;
	*/
	//2、使用循环
	int i;
	cout << "Please enter your grade: \n";
	for(i=0;i<3;i++)
	{
		cout << "The" << i << "time: ";
		cin >> grade[i];
	}
	cout << "The average grade is : " << (grade[0]+grade[1]+grade[2])/3<< endl ;
	system("pause");
	return 0;
}