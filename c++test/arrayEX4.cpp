/*将数列中的正负数间隔排列，多余的数放在数列末尾*/
#include <iostream>
using namespace std;  
class GFG 
{ 
    public: 
    void rearrange(int [],int); 
    void swap(int *,int *); 
    void printArray(int [],int); 
};   
void GFG :: rearrange(int arr[], int n) 
{ 
    /*如果所选数字小于零就跟最前面一个大于零的数交换位置*/
    int i = -1; 
    for (int j = 0; j < n; j++) 
    { 
        if (arr[j] < 0) 
        { 
            i++; 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    /*所有负数都在数列左侧，正数在右侧，i是最后一个负数的index，i+1是第一个正数的index*/
    int pos = i + 1, neg = 0; 
    /*从正数和负数两边开始遍历，并不断交换正负数位置，neg一次走两格*/
    while (pos < n && neg < pos &&  arr[neg] < 0) 
    { 
        swap(&arr[neg], &arr[pos]); 
        pos++; 
        neg += 2; 
    } 
} 
  
// A utility function  
// to swap two elements 
void GFG :: swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
// A utility function to print an array 
void GFG :: printArray(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 
  
// Driver Code 
int main()  
{ 
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    GFG test; 
    test.rearrange(arr, n); 
    test.printArray(arr, n); 
    return 0; 
} 
  
// This code is contributed  
// by vt_Yogesh Shukla 1
//commentaires traduies par XavierX