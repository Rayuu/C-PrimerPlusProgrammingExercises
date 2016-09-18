#include<iostream>
#include<array>
int main()
{
	using namespace std;
	const int ArSize=16;
	array<long double,101> factor;
	factor[1] = factor[0] = 1ll;
	for(int i=2;i<=100;i++)
	{
		factor[i] = i*factor[i-1];
	}
	for(int i=0;i<ArSize;i++)
	{
		cout << i << " != " << factor[i] << endl;
	}
	//Êä³ö100½×³Ë
	cout << "100 != "<<factor[100]<<endl;
	system("pause");
	return 0;
}