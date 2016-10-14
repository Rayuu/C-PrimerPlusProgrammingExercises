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
//翻译：getinfo()有2个参数，第一个指向student结构的数组中的第一个元素，
//另外一个参数是int类型，他表示是这个数组中的元素个数。这个函数请求和储存有关学生的数据。
//当遇见填满数组或者是遇见学生名字是一个空白行时终止输入。
//这个函数返回填充数组的元素数量  
int getinfo(student pa[],int n)
{
	int i=1;
	while(i<n+1)
	{
		cout << "请输入"<<i<< "#学生的姓名: ";
		cin.getline(pa->fullname,20);
		if(pa->fullname[0] == ' ')
		{
			break;
		}
		cout << i << "#学生的爱好： ";
		cin >> pa->hobby;
		cout << i<< "#学生的opp水平： ";
		cin >> pa->ooplevel;
		cin.sync();
		i++;
		pa++;
		cout << endl;
	}
	return (i-1);
}
//翻译：display1()函数将学生结构名作为参数，并显示内容  
void display1(student st)  
{  
    cout << st.fullname << " 的爱好是： " << st.hobby << " 。他的OOP水平是：" << st.ooplevel << " 级。" << endl;  
}  
  
//翻译：display2()函数将学生结构的值作为参数，然后输出学生结构的内容  
void display2(const student * ps)  
{  
    cout << ps->fullname << " 的爱好是： " << ps->hobby << " 。他的OOP水平是：" << ps->ooplevel << " 级。" << endl;  
}  
  
//display3()函数将结构数组的第一个元素的地址，以及数组的元素数量作为参数，然后输出这些结构的内容  
void display3(const student pa[], int n)  
{  
    for (int i = 0;i < n;i++)  
    {  
        cout << i + 1 << "#学生的名字是： " << pa[i].fullname << endl;  
        cout << "爱好是： " << pa[i].hobby << endl;  
        cout << "oop水平是： " << pa[i].ooplevel << endl;  
        cout << endl;  
    }  
}  
