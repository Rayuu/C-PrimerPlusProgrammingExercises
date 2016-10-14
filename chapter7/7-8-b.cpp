#include<iostream>  
using namespace std;  
  
const int seasons = 4;  
  
struct cost //注意：先声明结构，然后才能在下面的函数原型中调用  
{  
    double expenses[seasons];  
};  
  
void fill(cost*, const char[][20]); //填充  
void show(cost, const char[][20]);  //显示  

int main()  
{  
    const char snames[seasons][20] = { "Spring","Summer","Fall","Winter" };  
    const char (*Snames)[20]=snames;    //创建一个指针，指向一个20个字符的字符串数组。  
    cost Expenses;  
    fill(&Expenses, Snames);    //输入  
    //注意，假如这里直接引入结构名的话，会提示未被初始化。  
    //原因在于函数使用的是结构的副本，而这里需要填充结构中的变量的内容  
    show(Expenses, Snames); //显示  
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
    cout << "\n——————花费表——————\n";  
    for (int i = 0;i < seasons;i++)  
    {  
        cout << Snames[i] << " expenses: " << Expenses.expenses[i] << endl;  
        total += Expenses.expenses[i];  
    }  
    cout << "Total expenses: " << total << endl;  
}  