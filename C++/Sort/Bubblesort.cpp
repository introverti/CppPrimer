#include <iostream>
using namespace std;
void echange(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}


/*冒泡排序 Bubble Sort
不断排序相邻的两个元素，把最大的数推到最后一位*/
/*用下标*/
void bubbleSort_v1 (int array[],int array_size)
{
    int i,j;
    for (i=0;i<array_size;i++)//for(;;)
    {
        for (j=0;j<array_size-1-i;j++)
        {
            if (array[j]>array[j+1])
            {
                echange(array[j],array[j+1]);
            }
        }
    }
}
/*用指针*/
void bubbleSort_v2 (int* array,int array_size)
{
    int i,j;
    for (i=0;i<array_size;i++)
    {
        for (j=0;j<array_size-1-i;j++)
        {
            if (*(array+j)>*(array+j+1))
            {
                echange(*(array+j),*(array+j+1));
            }
        }
    }
}




int main()
{
    int array[]={1,2,5,7,4,9,0,3};
    int size=sizeof(array)/sizeof(int);
    if (!(size>1))
        return -1;
    bubbleSort_v1(array,size);
    for (auto i:array)
    {
        cout<<i<<" ";
    }
    return 0;
}