/*寻找一个《数组》里中第二小的元素
Methode 1 将数组排序 O(nlogn)
Methode 2 先寻找最小的元素，然后把它剔除，在寻找一次最小的元素 遍历两遍 O(n)
Methode 3 参考斐波那契数列，从一开始就定义两个值，如果有更小的值就依次传递 遍历一遍 O(n)
*/
#include <iostream>

using namespace std;

void findsecondsmallest (int array[],int arr_size)
{
    int i,premier,seconde;
    if (arr_size < 2)
    {
        cout<<"Entrée non validée";
        return;
    }
    premier=seconde=INT_MAX;//from <iosstream>, INT_MAX=2147483647 while INT_MIN=-2147483648
    for (i=0;i<arr_size;i++)
    {
        if (array[i]<premier)
        {
            seconde=premier;
            premier=array[i];
        }
        else if (array[i]<seconde && array[i]!=premier)
            seconde=array[i];
    }
    if (seconde==INT_MAX)
        cout<<"Le deuxième petit élément n'exist pas";
    else
        cout<< "Le plus petit élément est"<< premier <<"\n Le deuxième petit élément est"<<seconde<<endl;
}

int main()
{
    int array[]={7,6,9,0,25,78};
    int arr_size=sizeof(array)/sizeof(int);//数组长度，vector可以使用size()
    findsecondsmallest(array,arr_size);
    system("Pause");
    return 0;
}