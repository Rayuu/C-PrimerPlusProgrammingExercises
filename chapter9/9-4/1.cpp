#include<iostream>  
#include"global.h"  
  
namespace SALES //�Ѻ���������ӵ����ƿռ�֮��  
{  
    void setSales(Sales & s, const double ar[], int n)  
    {  
        int i;  
        for (i = 0;i < n && i < 4;i++)    //��ֵ  
            s.sales[i] = ar[i];  
  
        for (int j = i;j < 4;j++)    //��δ��ֵ������Ϊ0  
            s.sales[j] = 0;  
  
        double total = 0;  
        for (int j = 0;j < i;j++)    //totalΪ������Чֵ���ܺ�  
            total += s.sales[j];  
        s.average = total / i;  //����ƽ��ֵ  
  
        s.max = s.min = s.sales[0]; //�����Сֵ��ʼ��Ϊ��һ��ֵ  
  
        for (int j = 0;j < i;j++)    //���������Сֵ  
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
        for (int j = 0;j < i;j++)    //totalΪ������Чֵ���ܺ�  
            total += s.sales[j];  
        s.average = total / i;  //����ƽ��ֵ  
  
        s.max = s.min = s.sales[0]; //�����Сֵ��ʼ��Ϊ��һ��ֵ  
  
        for (int j = 0;j < i;j++)    //���������Сֵ  
        {  
            if (s.sales[j] > s.max)s.max = s.sales[j];  
            if (s.sales[j] < s.min)s.min = s.sales[j];  
        }  
    }  
  
    void showSales(const Sales & s)  
    {  
        using namespace std;  
        cout << "�����" << endl;  
        for (int i = 0;i < 4 && s.sales[i] != 0;i++)  
            cout << "s.sales[" << i << "] = " << s.sales[i] << endl;  
        cout << "average = " << s.average << endl;  
        cout << "max = " << s.max << endl;  
        cout << "min = " << s.min << endl;  
  
    }  
}  