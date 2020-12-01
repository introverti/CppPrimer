/*寻找数组内第一个不重复的元素
Methode 1 双循环，外循环选取元素，内循环判断是否重复
Methode 2 使用哈希表 unordered_map
*/
#include <iostream>
#include <unordered_map>//使用了哈希表

using namespace std;

int M1(int array[], int array_size)
{
    for (int i=0;i<array_size;i++)
    {
        int j;//不能在下面的boucle里定义j,因为后面有用到j进行判断
        for(j=0;j<array_size;j++)
        {
            if (i!=j && array[i]==array[j])
                break;
        }
        if (j==array_size)
            return array[i];
    }
    return -1;
}

int M2(int array[],int array_size)
{
    /*创建hash表并将数列内容按出现频率导入 联想FFT*/
    unordered_map<int,int> mp;//unordered_map<key,data>
    for (int i=0;i<array_size;i++)
        mp[array[i]]++;
    /*寻找频率为1的数*/
    for (int i=0;i<array_size;i++)
    {
        if (mp[array[i]]==1)
            return array[i];
    /*另外一种方法 遍历哈希表 使用auto(C++11)*/
    //for (auto x : mp) 
        //if (x.second == 1) //second 对应哈希表的data
            //return x.first; //first 对应哈希表的key
    }
    return -1;
}

int main()
{
    int array[]={1,2,1,3,5,2};
    int n=sizeof(array)/sizeof(int);
    cout <<"The first methode output is "<<M1(array,n)<<"\nThe seconde methode output is "<<M2(array,n)<<endl;
    return 0;
}