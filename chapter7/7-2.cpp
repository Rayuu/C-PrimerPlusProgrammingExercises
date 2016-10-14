#include<iostream>
using namespace std;
double* input_grade(void);
void show(double *m);
double average_grade(double *m);
int main()
{
	double *grade=input_grade();
	show(grade);
	double average = average_grade(grade);
	cout << "The average is "<< average<<endl;
	system("pause");
	return 0;
}
double* input_grade(void)
{
	static double x[11];//最后一位是截止符
	double *m=x;
	int i;
	for(i=0;i<10 && cin;i++)
	{
		cout <<i+1<< "# grade: ";
		cin >> x[i];
		if(x[i]<0)
		{
			break;
		}
	}
	if(!cin)
	{
		i--;
		cin.sync();
		cin.clear();
	}
	x[i]=-1;//最后一位赋值-1，便于查找地址
	return m;//返回数组地址
}

void show(double *m)
{
	cout <<"The grade is :";
	for(;*m>=0;m++)
	{
		cout << *m<<"  ";
	}
	cout << endl;

}

double average_grade(double *m)
{
	double sum=0.0;
	int i;
	for(i=0;*m>=0;m++)//直到m[10]为-1
	{
		sum+=*m;
		i++;//记录个数
	}
	return sum/i;
}