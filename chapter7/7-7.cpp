#include <iostream>  
const int MAX = 5;  
using namespace std;  

double*fill_array(double*, int);    //���  
void show(double*, double*);        //��ʾ  
void revalue(double*, double*, double);     //�ı�  
  
int main()  
{  
    double m[MAX];  
    cout << "�����Ǹ�����������֣�" << endl;  
    double*x = fill_array(m, MAX);  //��䣬����ָ�룬ָ�����һλ��Ч����  
    show(m, x); //mΪ��ʼ��xΪ���һλ  
    if (x == (m - 1))   //���û��������Ч����  
        cout << "��û��������Ч���֣������޷��任��" << endl;  
    else  
    {  
        cout << "��������Ҫ����ı�����ı�����" << endl;  
        double size;  
        cin >> size;  
        if (!cin)   //�������С��0��������ı���  
        {  
            cout << "��������޷��任��" << endl;  
            cin.clear();  
            cin.sync();  
        }  
        else if (size < 0)  
            cout << "������Ǹ������޷��任��" << endl;  
        else  
            revalue(m, x, size);    //�ı�ʱ�Դ���ʾ  
    }  
    system("pause");  
    return 0;  
}  
  
double*fill_array(double*m, int max)    //���뺯��  
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
            cout << "��������������..." << endl;  
            break;  
        }  
        else if(m[i]<0)  
        {  
            cout << "�������˸������������..." << endl;  
            break;  
        }  
    }  
    double *a = &m[i-1];    //m[i-1]Ϊ������Чλ�õ����һλ  
    return a;  
}  
  
void show(double*m, double*x)   //��ʾ����  
{  
    cout << endl << "���ｫ��ʾ����������֣�" << endl;  
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