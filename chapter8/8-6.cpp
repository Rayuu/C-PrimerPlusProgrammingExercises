#include<iostream>
#include<cstring>
using namespace std;
template<typename T>T maxn(T *a,const int b);
template<>char * maxn(char *[],const int );//¾ßÌå»¯
int main()
{
	int a[6] = {2,3,4,110,1,88};
	double b[6] = {22.33,33.44,11,1,0.1,1.2};
	char *c[5];
	c[0] = "aaaaa";
	c[1] = "baaaac";
	c[2] = "ccccccccccc";
	c[3] = "fffffffffffffffff";
	c[4] = "dddaaa";
	int d = maxn(a,6);
	double e = maxn(b,4);
	char *f = maxn(c,5);
	cout << "d = "<<d <<", e = "<<e<<", f = "<<f<<endl;

	system("pause");
	return 0;
}

template<typename T>T maxn(T *a,const int b)
{
	T temp = a[0];
	for (int i=0;i<b;i++)
	{
		if(a[i]>temp)temp = a[i];
	}
	return temp;
}

template<>char * maxn(char *a[],const int b)
{
	char *c = a[0];
	for(int i=1;i<b;i++)
	{
		if(strlen(a[i])>strlen(c)) c = a[i];
	}
	return c;
}
