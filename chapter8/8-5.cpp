/*
5.��дģ�庯��max5()������һ������5��T����Ԫ�ص�������Ϊ����������������������Ԫ��
�����ڳ��ȹ̶�����˿�����ѭ����ʹ��Ӳ���룬������ͨ�����������ݣ���
��һ��������ʹ�øú�������T�滻Ϊһ������5��intֵ�������һ������5��doubleֵ�����飬�Բ��Ըú�����
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
