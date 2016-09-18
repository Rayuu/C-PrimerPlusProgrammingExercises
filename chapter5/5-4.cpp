#include<iostream>
int main()
{
	using namespace std;
	int i;
	double D=100,C=100;
	for(i=0;D>=C;i++)
	{
		D += 100*0.1;
		//C += C*0.05;
		C = C*1.05;
	}
	cout << i <<endl;
	system("pause");
	return 0;
}