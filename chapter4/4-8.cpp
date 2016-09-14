#include<iostream>
#include<string>
struct pizza	//definition
{
	std::string band;
	double diameter;
	double weight;
};
int main()
{
	using namespace std;
	pizza * ps = new pizza;//declaration
	cout << "Please enter the diameter of pizza: ";
	cin >> ps->diameter;
	cin.get();
	cout << "the band: ";
	getline(cin,ps->band);
	cout << "the weight: ";
	cin >> ps->weight;
	cout << endl << ps->band << endl;
	cout << ps->diameter << endl;
	cout << ps->weight << endl;
	delete ps;
	system("pause");
	return 0;
}