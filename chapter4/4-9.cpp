#include<iostream>
#include<cstring>
#include<string>
struct CandyBar
{
	std::string band;
	double Weight;
	int Vol;
};
int main()
{
	using namespace std;
	//CandyBar *ps = new CandyBar [3];
	CandyBar *ps = new CandyBar [3];
	//循环赋值 也可以手动输入
	int i;
	
	for(i=0;i<3;i++)
	{
		ps[i].band = "haharayu";
		ps[i].Vol = 233;
		ps[i].Weight = 2.33;
	}
	
	for(i=0;i<3;i++)
	{
		cout <<ps[i].band << ", ";
		cout << ps[i].Vol << ", ";
		cout << ps[i].Weight << endl;
	}
	delete [] ps;
	system("pause");
	return 0;
}