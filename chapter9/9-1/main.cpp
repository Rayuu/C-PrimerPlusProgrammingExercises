#include<iostream>  
#include"golf.h"  
  
int main()  
{  
    using namespace std;  
    golf mm[10];  
    cout << "������������һ���˵ĵȼ���������������������ַ���ʱ�����������ֵ�ʱ��ֱ�Ӱ��س����������������" << endl;  
    cout << "1# ������";  
    cin.getline(mm[0].fullname, 39);  
    cout << "�ȼ���";  
    cin >> mm[0].handicap;  
    int i;  
    cin.sync();  
    for (i = 1;setgolf(mm[i - 1]);i++)  
    {  
        cout << i+1<<"# ������";  
        cin.getline(mm[i].fullname, 39);  
        cout << "�ȼ���";  
        cin >> mm[i].handicap;  
        cin.sync();  
    }  
      
    cout << "���������" << endl << endl;  
    if (!setgolf(mm[0]))  
    {  
        cout << "�����㲢û���������ݣ����������" << endl;  
        system("pause");  
        return 0;  
    }  
    cout << "������ʾ��������" << endl;  
    for (i = 0;i < 10 && setgolf(mm[i]);i++)  
    {  
        showgolf(mm[i]);  
    }  
  
    cout << endl;  
    cout << "���ڽ�1#�ĵȼ���Ϊ200" << endl;  
    handicap(mm[0], 200);  
    showgolf(mm[0]);  
  
    system("pause");  
    return 0;  
}  