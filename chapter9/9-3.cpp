#include<iostream>  
  
struct chaff  
{  
    char dross[20];  
    int flag;  
};  
//编写一个程序，使用定位new运算符将一个包含两个这样的结构的数组放在一个缓冲区中。
//然后，给结构的成员赋值（对于char数组，使用函数strcpy()），并使用一个循环来显示内容。
//一种方法是像程序清单9.10那样将一个静态数组用作缓冲区；另一种方法是使用常规new运算符来分配缓冲区。  
  
int main()  
{  
    using namespace std;  
  
    chaff pp[5];  
    chaff*x = new(pp)chaff[2];  //定位new运算符，把两个这样的结构放在pp的位置  
    char *mm=new char[20];  
    for (int i = 0;i < 2;i++)  
    {  
        cout << i + 1 << "# dross: ";  
        cin.getline(mm, 19);  
        strcpy_s(x[i].dross,mm);    //将输入的复制进去  
        cout << "flag:  ";  
        cin >> x[i].flag;  
        cin.sync();  
    }  
  
    for (int i = 0;i < 2;i++)  
    {  
        cout << "dross：" << x[i].dross;  
        cout << ", flag: " << x[i].flag << endl;  
    }  
  
    system("pause");  
    return 0;  
}  