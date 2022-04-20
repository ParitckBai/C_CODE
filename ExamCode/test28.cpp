#include <stdio.h>
//交换数组奇数与偶数的位置

void print(int a[],int sz)
{
    int i = 0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void move(int a[],int sz)
{
    int left = 0;
    int right = sz-1;
    while(left < right)
    {
        while((left<right) && (a[left]%2 == 1))
        {
            left++;
        }
        while((left<right) && (a[right]%2 == 0))
        {
            right--;
        }
        if(left < right)
        {
            int tmp = a[left];
            a[left] = a[right];
            a[right] = tmp;
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr)/sizeof(arr[0]);
    move(arr,sz);
    print(arr,sz);
    return 0;
}