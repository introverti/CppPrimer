/*
将两个排好序的数字融合成一个排好序的数组
M1 从两个数组中各取一个数出来，较小的写入新的数组，依次推进 O(n1+n2)Time O(n1+n2)Espace
M2 使用map 使用map<int,bool>会发现如果有重复的值map只会输出一次遂改用map<int,int> O(n)Time O(n)Espace
合并有序数列的意义在于，可以将一个数列的排序拆分成两个子数列排序再合并，不断拆分，最终就是两个元素的大小比较和已经排好序的组有序合并。
*/
#include <iostream>
#include <map>//stl

using namespace std;

void M1(int arr1[],int arr2[],int arr1_size,int arr2_size, int arr3[])
{
    int i=0,j=0,k=0;
    while (i<arr1_size && j<arr2_size)
    {   
        if (arr1[i]<arr2[j])
            arr3[k++]=arr1[i++];//i++先操作在++，++i先++再操作
        else
            arr3[k++]=arr2[j++];//如果相等 arr1的值会被先放入arr3
    }
    while (i<arr1_size)
        arr3[k++]=arr1[i++];//剩余的arr1的值
    while(j<arr2_size)
        arr3[k++]=arr2[j++];//剩余的arr2的值
    cout<<"output M1:";
    for (int i=0;i<arr1_size+arr2_size;i++)
        cout<<arr3[i]<<" ";
}


void M2(int arr1[],int arr2[],int arr1_size,int arr2_size)
{
    map<int,int> mp;
    for (int i=0;i<arr1_size;i++)
     mp[arr1[i]]++;
    for (int i=0;i<arr2_size;i++)
     mp[arr2[i]]++;
    cout<<"\noutput M2:";
    for (auto i:mp)
        for (int j=0;j<i.second;j++)
            cout<<i.first<<" ";   
}


int main()
{
    int arr1[]={1,3,5,7,10};
    int arr2[]={2,4,6,8,10};
    int n1=sizeof(arr1)/sizeof(int);
    int n2=sizeof(arr2)/sizeof(int);
    int arr3[n1+n2];
    M1(arr1,arr2,n1,n2,arr3);
    M2(arr1,arr2,n1,n2);
    return 0;
}