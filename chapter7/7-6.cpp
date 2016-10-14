#include<iostream>
using namespace std;
int Fill_array(double *m,int x);
void Show_array(double *m,int n);
void Reverse_array(double *m,int n);
const int COUNT=4;
int main()
{
	double arr[COUNT];
	int num;
	num = Fill_array(arr,COUNT);
	Show_array(arr,num);
	Reverse_array(arr,num);
	Show_array(arr,num);
	double x;
	x = arr[0];
	arr[0]=arr[num-1];
	arr[num-1]=x;
	Show_array(arr,num);
	system("pause");
	return 0;
}

int Fill_array(double *m,int x)
{
	cout <<"输入数字，不超过"<<x<<"个"<<endl;
	int i;
	for(i=0;i<x && cin;i++,m++)
	{
		cout << "# "<< i+1<<" ";
		cin >> *m;
	}
	if(!cin)
	{
		cin.clear();
		i--;
	}
	cout << "输入了"<<i<<"个数"<<endl;
	return i;
}

void Show_array(double *m,int n)
{
	int i=0;
	for(i=0;i<n;i++,m++)
	{
		cout << i+1 <<" "<< *m << endl;
	}
	cout << endl;
}
void Reverse_array(double *m,int n)
{
	int i=0;
	double reverse;
	for(i=0;i<n/2;i++)// 除以2  然后交换
	{
		reverse = m[i];
		m[i]=m[n-i-1];
		m[n-i-1]=reverse;
	}
}