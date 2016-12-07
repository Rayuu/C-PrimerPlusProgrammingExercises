
namespace SALES  
{  
    const int QUARTERS = 4;  
    struct Sales  
    {  
        double sales[QUARTERS];  
        double average;  
        double max;  
        double min;  
    };  
    //��ar�����︴��n����4��ȡ��С�ģ�����Ա��s�ṹ�е�sales��Ա��Ȼ����������С��ƽ����Ȼ���sales��Աʣ�µĳ�Ա������Ϊ0  
    // copies the lesser of 4 or n items from the array ar  
    // to the sales member of s and computes and stores the  
    // average, maximum, and minimum values of the entered items;  
    // remaining elements of sales, if any, set to 0  
    void setSales(Sales & s, const double ar[], int n);  
  
    //�ռ��ļ��ȵ�����������洢���ǽ�s��sales��Ա��Ȼ����㣬���洢��ƽ���������Сֵ  
    // gathers sales for 4 quarters interactively, stores them  
    // in the sales member of s and computes and stores the  
    // average, maximum, and minimum values  
    void setSales(Sales & s);  
  
    //��ʾ�ṹ�е�������Ϣ  
    //display all information in structures s  
    void showSales(const Sales & s);  
}  

