#include<iostream>  
using namespace std;  
  
const int seasons = 4;  
  
struct cost //ע�⣺�������ṹ��Ȼ�����������ĺ���ԭ���е���  
{  
    double expenses[seasons];  
};  
  
void fill(cost*, const char[][20]); //���  
void show(cost, const char[][20]);  //��ʾ  

int main()  
{  
    const char snames[seasons][20] = { "Spring","Summer","Fall","Winter" };  
    const char (*Snames)[20]=snames;    //����һ��ָ�룬ָ��һ��20���ַ����ַ������顣  
    cost Expenses;  
    fill(&Expenses, Snames);    //����  
    //ע�⣬��������ֱ������ṹ���Ļ�������ʾδ����ʼ����  
    //ԭ�����ں���ʹ�õ��ǽṹ�ĸ�������������Ҫ���ṹ�еı���������  
    show(Expenses, Snames); //��ʾ  
    system("pause");  
    return 0;  
}  
  
void fill(cost *Expenses, const char Snames[][20])  
{  
    for (int i = 0;i < seasons;i++)  
    {  
        cout << "Enter " << Snames[i] << " expenses: ";  
        cin >> Expenses->expenses[i];  
    }  
  
}  
  
void show(cost Expenses, const char Snames[][20])  
{  
    double total = 0;  
    cout << "\n���������������ѱ�����������\n";  
    for (int i = 0;i < seasons;i++)  
    {  
        cout << Snames[i] << " expenses: " << Expenses.expenses[i] << endl;  
        total += Expenses.expenses[i];  
    }  
    cout << "Total expenses: " << total << endl;  
}  