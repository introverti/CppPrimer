/*用栈计算后缀表达式
后缀表达式表达了计算顺序，按顺序读写，如果是数字就存入栈中，如果是运算符就从栈中提取相关数据进行计算然后将结果存入栈中
Exemple: 
    人的书写顺序 （3+2）*5
    后缀表达式 32+5*
*/
#include <iostream>
#include <string.h>
using namespace std;


// classe 有public有private struct都是公共 
class Stack  
{  
    public: 
    int top;            //整数 最上方存储 
    unsigned capacity;  //无符号数 容量
    int* array;         //整型指针
};  