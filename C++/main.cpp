#include <iostream>
#include <string>
#include "headtest.h"
using namespace std;
using std::string;

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
    strcut book1;
    book1.bookNo=a;
    cout<<book1.bookNo;
    return 0;
}
