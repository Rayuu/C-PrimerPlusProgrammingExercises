
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
    //从ar数组里复制n或者4（取较小的）个成员到s结构中的sales成员。然后计算最大最小和平均。然后把sales成员剩下的成员，设置为0  
    // copies the lesser of 4 or n items from the array ar  
    // to the sales member of s and computes and stores the  
    // average, maximum, and minimum values of the entered items;  
    // remaining elements of sales, if any, set to 0  
    void setSales(Sales & s, const double ar[], int n);  
  
    //收集四季度的销售情况，存储他们进s的sales成员，然后计算，并存储到平均、最大、最小值  
    // gathers sales for 4 quarters interactively, stores them  
    // in the sales member of s and computes and stores the  
    // average, maximum, and minimum values  
    void setSales(Sales & s);  
  
    //显示结构中的所有信息  
    //display all information in structures s  
    void showSales(const Sales & s);  
}  

