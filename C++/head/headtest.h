/*头文件保护符*/
#ifndef HEADTEST_H
#define HEADTEST_H

#include <iostream>
#include <string>
using namespace std;
using std::string;


struct Sales_data
{   
    string bookNo="initial";
    unsigned units_sold=0;//变量设置默认值
    double revenue=0.0;

    void loadData();//

};
void Sales_data::loadData ()
{
    /*是否要编写串口来读取字符串?*/
    cout<<"please enter the name of the book,units sold and the revenue,seperate with space"<<endl;
    cin>>bookNo>>units_sold>>revenue;
}
#endif 
