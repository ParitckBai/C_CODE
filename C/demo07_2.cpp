#include <stdio.h>

void Init(int arr[],int sz)
{
    int i =  0;
    for(i=0;i<sz;i++)
    {
        arr[i] = 0;
    }
}

void print(int arr[],int sz)
{
    int i =  0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void reverse(int arr[],int sz)
{
    int left = 0;
    int right = sz - 1;
    while (left<right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }  
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //int arr[10] = {};
    int sz = sizeof(arr)/sizeof(arr[0]);
    //Init(arr,sz); //初始化函数
    print(arr,sz); //打印函数
    reverse(arr,sz); //逆序函数
    print(arr,sz);

}