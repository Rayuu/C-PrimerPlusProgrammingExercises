#include<iostream>
struct CandyBar
{
	char Band[20];
	double Weight;
	int Vol;
};
int main()
{
	using namespace std;
	CandyBar Member[3]=
	{
		{"sugar",2.3,200},
		{"yoghyourt",5.5,500},
		{"haha",20.1,350}
	};
	int i ;
	for(i=0;i<3;i++)
	{
		cout << Member[i].Band << ", ";
		cout << Member[i].Vol << ", ";
		cout << Member[i].Weight << endl;
	}
	system("pause");
	return 0;
}