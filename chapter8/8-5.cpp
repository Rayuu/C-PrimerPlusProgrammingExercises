/*
5.编写模板函数max5()，它将一个包含5个T类型元素的数组作为参数，并返回数组中最大的元素
（由于长度固定，因此可以在循环中使用硬编码，而不必通过参数来传递）。
在一个程序中使用该函数，将T替换为一个包含5个int值的数组和一个包含5个double值的数组，以测试该函数。
*/

#include<iostream>
#include<cstring>
using namespace std;
template <class T>T max5(T *a);
int main()
{
	int a[5]={1,8,3,7,5};
	double b[5] = {1.1,1.23,1.66,2.33,3.45};
	int c = max5(a);
	double d = max5(b);
	cout << "c = "<<c<<" d = "<<d<<endl;
	system("pause");
	return 0;
}

template <class T>T max5(T *a)
{
	T temp = a[0];
	for(int i=1;i<5;i++)
		if(a[i]>temp)temp = a[i];
	return temp;
}
