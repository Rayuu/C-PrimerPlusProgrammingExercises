#include<iostream>
using namespace std;
long double number_choice(int x,int y);
long double another_number(int x);

int main()
{
	int numbers,choice,num;
	cout << "��������: ";
	cin >> numbers;
	cout << "ѡȡ�ĺ������: ";
	cin >> choice;
	cout << "��ѡ��������: ";
	cin >> num;
	long double p_1 = number_choice(numbers,choice);
	long double p_2 = another_number(num);
	long double dajiang = p_1 * p_2;
	cout << endl;
	cout.precision(20);
	cout.setf(ios_base::fixed, ios_base::floatfield);  
	cout << "�񽱵ĸ���Ϊ��"<<dajiang*100<<"%"<<endl;
	system("pause");
	return 0;
}

long double number_choice(int x,int y)
{
	long double total=1;
	int i=0;
	for(i=0;i<y;i++)
	{
		total = total*(i+1)/(x-i);
	}
	return total;
}

long double another_number(int x)
{
	long double total=1.0/x;
	return total;
}