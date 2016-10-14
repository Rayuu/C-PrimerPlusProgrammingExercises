#include <iostream>  
const int MAX = 5;  
using namespace std;  

double*fill_array(double*, int);    //填充  
void show(double*, double*);        //显示  
void revalue(double*, double*, double);     //改变  
  
int main()  
{  
    double m[MAX];  
    cout << "以下是给数组填充数字：" << endl;  
    double*x = fill_array(m, MAX);  //填充，返回指针，指向最后一位有效数字  
    show(m, x); //m为开始，x为最后一位  
    if (x == (m - 1))   //如果没有输入有效数字  
        cout << "你没有输入有效数字，所以无法变换。" << endl;  
    else  
    {  
        cout << "请输入你要整体改变数组的倍数：" << endl;  
        double size;  
        cin >> size;  
        if (!cin)   //错误或者小于0，不输出改变后的  
        {  
            cout << "输入错误，无法变换。" << endl;  
            cin.clear();  
            cin.sync();  
        }  
        else if (size < 0)  
            cout << "输入的是负数，无法变换。" << endl;  
        else  
            revalue(m, x, size);    //改变时自带显示  
    }  
    system("pause");  
    return 0;  
}  
  
double*fill_array(double*m, int max)    //输入函数  
{  
    int i;  
    for (i = 0;i < max;i++)  
    {  
        cout << i + 1 << "# : ";  
        cin >> m[i];  
        if (!cin)  
        {  
            cin.clear();  
            cin.sync();  
            cout << "输入错误，输入结束..." << endl;  
            break;  
        }  
        else if(m[i]<0)  
        {  
            cout << "你输入了负数，输入结束..." << endl;  
            break;  
        }  
    }  
    double *a = &m[i-1];    //m[i-1]为数组有效位置的最后一位  
    return a;  
}  
  
void show(double*m, double*x)   //显示函数  
{  
    cout << endl << "这里将显示你输入的数字：" << endl;  
    while (m != (x+1))  
    {  
        int i = 0;  
        cout << ++i << "# = " << *m << endl;  
        m++;  
    }  
}  
  
void revalue(double*m, double*x,double a)  
{  
    while (m != (x + 1))  
    {  
        int i = 0;  
        cout << ++i << "# = " << (*m *= a) << endl;  
        m++;  
    }  
}  