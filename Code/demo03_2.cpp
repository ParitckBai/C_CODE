#include <stdio.h>
//求和

int main(){
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    printf("请输入两个操作数:>");
    scanf("%d %d",&num1, &num2);
    sum = num1 + num2;
    printf("sum = %d\n" , sum);
    return 0; 
}