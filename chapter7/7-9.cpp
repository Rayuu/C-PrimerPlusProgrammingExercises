#include<iostream>
using namespace std;
const int SLEN = 30;
struct student{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[],int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[],int n);
int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while(cin.get() != '\n')
		continue;

	student * ptr_stu = new student [class_size];
	int entered = getinfo(ptr_stu, class_size);
	for(int i=0; i< entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);

	}
	display3(ptr_stu,entered);
	delete [] ptr_stu;
	cout << "Done\n";
	system("pause");
	return 0;
}
//���룺getinfo()��2����������һ��ָ��student�ṹ�������еĵ�һ��Ԫ�أ�
//����һ��������int���ͣ�����ʾ����������е�Ԫ�ظ����������������ʹ����й�ѧ�������ݡ�
//�����������������������ѧ��������һ���հ���ʱ��ֹ���롣
//�������������������Ԫ������  
int getinfo(student pa[],int n)
{
	int i=1;
	while(i<n+1)
	{
		cout << "������"<<i<< "#ѧ��������: ";
		cin.getline(pa->fullname,20);
		if(pa->fullname[0] == ' ')
		{
			break;
		}
		cout << i << "#ѧ���İ��ã� ";
		cin >> pa->hobby;
		cout << i<< "#ѧ����oppˮƽ�� ";
		cin >> pa->ooplevel;
		cin.sync();
		i++;
		pa++;
		cout << endl;
	}
	return (i-1);
}
//���룺display1()������ѧ���ṹ����Ϊ����������ʾ����  
void display1(student st)  
{  
    cout << st.fullname << " �İ����ǣ� " << st.hobby << " ������OOPˮƽ�ǣ�" << st.ooplevel << " ����" << endl;  
}  
  
//���룺display2()������ѧ���ṹ��ֵ��Ϊ������Ȼ�����ѧ���ṹ������  
void display2(const student * ps)  
{  
    cout << ps->fullname << " �İ����ǣ� " << ps->hobby << " ������OOPˮƽ�ǣ�" << ps->ooplevel << " ����" << endl;  
}  
  
//display3()�������ṹ����ĵ�һ��Ԫ�صĵ�ַ���Լ������Ԫ��������Ϊ������Ȼ�������Щ�ṹ������  
void display3(const student pa[], int n)  
{  
    for (int i = 0;i < n;i++)  
    {  
        cout << i + 1 << "#ѧ���������ǣ� " << pa[i].fullname << endl;  
        cout << "�����ǣ� " << pa[i].hobby << endl;  
        cout << "oopˮƽ�ǣ� " << pa[i].ooplevel << endl;  
        cout << endl;  
    }  
}  
