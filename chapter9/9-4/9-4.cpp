#include<iostream>  
#include"global.h"  
  
int main()  
{  
    using namespace std;  
    using namespace SALES;  
    Sales name[2];  
    double x[3] = { 1.1,5.5,3.3 };  
    setSales(name[0], x, 3);  
    setSales(name[1]);  
      
    for (int i = 0;i < 2;i++)  
        showSales(name[i]);  
  
    system("pause");  
    return 0;  
}   