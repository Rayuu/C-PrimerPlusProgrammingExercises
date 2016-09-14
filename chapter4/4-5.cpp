#include<iostream>
int main()
{
	using namespace std;
	struct CandyBar
	{
		char Name[20];
		double Weight;
		int Vol;
	}snack=
	{
		"Mocha Munch",
		2.3,
		350
	};
	cout << "The snack's name: " << snack.Name << endl;
	cout << "The snack's Weight: " << snack.Weight << endl;
	cout << "The snack's Vol: " << snack.Vol << endl;
	system("pause");
	return 0;
}