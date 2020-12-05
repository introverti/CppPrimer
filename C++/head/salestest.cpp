#include <iostream>
#include <string>
#include "headtest.h"

using namespace std;
using std::string;

int main()
{
    Sales_data book1,book2;
    book1.loadData();
    book2.loadData();
    cout<<"info of first book"<<book1.bookNo<<book1.units_sold<<book1.revenue<<endl;
    cout<<"info of second book"<<book2.bookNo<<book2.units_sold<<book2.revenue<<endl;
    // book1.calculeSom(book1,book2);//计算总和需要用到两个对象的值，类可以重载？
    return 0;
}