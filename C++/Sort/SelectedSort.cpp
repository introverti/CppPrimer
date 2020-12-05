#include <iostream>
using namespace std;
void echange(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
/*选择排序
遍历数列找出最大(小)的值放到最右(左侧)*/
void selectionSort(int* array,int array_size)
{
    auto left=array;//最左边数的地址
    int min,j,k;
    for (j=0;j<array_size;j++)
    {
        min=INT_MAX;
        for (int i=j;i<array_size;i++)
        {
            if (*(array+i)<min)
            {
                k=i;
                min=*(array+i);
            }
        }
        echange(*(array+j),*(array+k));
    }
}

int main()
{
    int array[]={1,7,9,8,6,5,0,3};
    int size=sizeof(array)/sizeof(int);
    if (!(size>1))
        return -1;
    selectionSort(array,size);
    for (auto i:array)
    {
        cout<<i<<" ";
    }
    return 0;
}