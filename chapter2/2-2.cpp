#include<iostream>
long Cal(long dis)
{
	return dis*200;
}
int main()
{
	using namespace std;
	long distance;
	cout << "Please enter the distance (The type is int) :" ;
	cin >> distance;
	cout << Cal(distance);
	cout << endl;
	system("pause");
	return 0;
}