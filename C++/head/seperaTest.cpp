#include <iostream>
#include <string>
#include "headtest.h"
using namespace std;
using std::string;
/*读取字符串的串口，以enter结束*/
void stringRAW(string &bookNo)
{   
    char n;
    while (cin.get(n))
    {
        if (n=='\n')
            break;
        bookNo+=n;   
    }
}

int main(){
    string a="hello";
    stringRAW(a);
    Sales_data book1;
    book1.bookNo=a;
    cout<<book1.bookNo;
    return 0;
}