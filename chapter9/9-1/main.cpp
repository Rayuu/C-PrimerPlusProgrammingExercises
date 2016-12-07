#include<iostream>  
#include"golf.h"  
  
int main()  
{  
    using namespace std;  
    golf mm[10];  
    cout << "请输入姓名和一个人的等级。若输入在姓名输入空字符串时（在输入名字的时候直接按回车键），则结束输入" << endl;  
    cout << "1# 姓名：";  
    cin.getline(mm[0].fullname, 39);  
    cout << "等级：";  
    cin >> mm[0].handicap;  
    int i;  
    cin.sync();  
    for (i = 1;setgolf(mm[i - 1]);i++)  
    {  
        cout << i+1<<"# 姓名：";  
        cin.getline(mm[i].fullname, 39);  
        cout << "等级：";  
        cin >> mm[i].handicap;  
        cin.sync();  
    }  
      
    cout << "输入结束。" << endl << endl;  
    if (!setgolf(mm[0]))  
    {  
        cout << "由于你并没有输入数据，程序结束。" << endl;  
        system("pause");  
        return 0;  
    }  
    cout << "现在显示输入结果：" << endl;  
    for (i = 0;i < 10 && setgolf(mm[i]);i++)  
    {  
        showgolf(mm[i]);  
    }  
  
    cout << endl;  
    cout << "现在将1#的等级改为200" << endl;  
    handicap(mm[0], 200);  
    showgolf(mm[0]);  
  
    system("pause");  
    return 0;  
}  