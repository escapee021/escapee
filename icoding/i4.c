//计算账单（Bills）

//编写⼀个程序，要求用户输出⼀个美元数量，然后显示出如何用最少20美元、10美元、5美元和1美元来付款。

//Enter a dollar amount: 93
//$20 bills: 4
//$10 bills: 1
//$5 bills: 0
//$1 bills: 3
#include <stdio.h>
int main(){
    int price,A,B,C,D;
    printf("Enter a dollar amount:");
    scanf("%d",&price);
    A=price / 20;
    B=price % 20 /10;
    C=price % 20 %10/5;
    D=price %20%10%10%5/1;
    printf("$20 bills:%d\n",A);
    printf("$10 bills:%d\n",B);
    printf("$5 bills:%d\n",C);
    printf("$1 bills:%d\n",D);
    return 0;
}