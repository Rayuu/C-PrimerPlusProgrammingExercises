#include<iostream>  
  
struct chaff  
{  
    char dross[20];  
    int flag;  
};  
//��дһ������ʹ�ö�λnew�������һ���������������Ľṹ���������һ���������С�
//Ȼ�󣬸��ṹ�ĳ�Ա��ֵ������char���飬ʹ�ú���strcpy()������ʹ��һ��ѭ������ʾ���ݡ�
//һ�ַ�����������嵥9.10������һ����̬������������������һ�ַ�����ʹ�ó���new����������仺������  
  
int main()  
{  
    using namespace std;  
  
    chaff pp[5];  
    chaff*x = new(pp)chaff[2];  //��λnew������������������Ľṹ����pp��λ��  
    char *mm=new char[20];  
    for (int i = 0;i < 2;i++)  
    {  
        cout << i + 1 << "# dross: ";  
        cin.getline(mm, 19);  
        strcpy_s(x[i].dross,mm);    //������ĸ��ƽ�ȥ  
        cout << "flag:  ";  
        cin >> x[i].flag;  
        cin.sync();  
    }  
  
    for (int i = 0;i < 2;i++)  
    {  
        cout << "dross��" << x[i].dross;  
        cout << ", flag: " << x[i].flag << endl;  
    }  
  
    system("pause");  
    return 0;  
}  