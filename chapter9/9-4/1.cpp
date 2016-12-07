#include<iostream>  
#include"global.h"  
  
namespace SALES //把函数定义添加到名称空间之中  
{  
    void setSales(Sales & s, const double ar[], int n)  
    {  
        int i;  
        for (i = 0;i < n && i < 4;i++)    //赋值  
            s.sales[i] = ar[i];  
  
        for (int j = i;j < 4;j++)    //将未赋值的设置为0  
            s.sales[j] = 0;  
  
        double total = 0;  
        for (int j = 0;j < i;j++)    //total为所有有效值的总和  
            total += s.sales[j];  
        s.average = total / i;  //设置平均值  
  
        s.max = s.min = s.sales[0]; //最大最小值初始化为第一个值  
  
        for (int j = 0;j < i;j++)    //设置最大最小值  
        {  
            if (s.sales[j] > s.max)s.max = s.sales[j];  
            if (s.sales[j] < s.min)s.min = s.sales[j];  
        }  
  
    }  
  
    void setSales(Sales & s)  
    {  
        for (int i = 0;i < 4;i++)  
        {  
            s.sales[i] = rand() % 20 + 1;  
        }  
        int i = 4;  
        double total = 0;  
        for (int j = 0;j < i;j++)    //total为所有有效值的总和  
            total += s.sales[j];  
        s.average = total / i;  //设置平均值  
  
        s.max = s.min = s.sales[0]; //最大最小值初始化为第一个值  
  
        for (int j = 0;j < i;j++)    //设置最大最小值  
        {  
            if (s.sales[j] > s.max)s.max = s.sales[j];  
            if (s.sales[j] < s.min)s.min = s.sales[j];  
        }  
    }  
  
    void showSales(const Sales & s)  
    {  
        using namespace std;  
        cout << "输出：" << endl;  
        for (int i = 0;i < 4 && s.sales[i] != 0;i++)  
            cout << "s.sales[" << i << "] = " << s.sales[i] << endl;  
        cout << "average = " << s.average << endl;  
        cout << "max = " << s.max << endl;  
        cout << "min = " << s.min << endl;  
  
    }  
}  