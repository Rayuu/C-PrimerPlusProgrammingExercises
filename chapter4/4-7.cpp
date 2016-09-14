#include<iostream>
#include<string>
struct pizza
{
	std::string band;
	double diameter;
	double weight;
};
int main()
{
	using namespace std;
	pizza William;
	cout << "Please enter the band of pizza: ";
	getline(cin,William.band);
	cout << "the diameter: ";
	cin >> William.diameter;
	cout << "the weight: ";
	cin >> William.weight;
	cout << endl << William.band << endl;
	cout << William.diameter << endl;
	cout << William.weight << endl;
	system("pause");
	return 0;
}