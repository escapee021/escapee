//还贷计算（Loan Balance）

//编程计算第一、第二、第三个月还贷后剩余的贷款金额。

//Enter amout of loan: 20000.00
//Enter interest rate: 6.0
//Enter monthly payment: 386.66

//Balance remaining after first payment: $19713.34
//Balance remaining after second payment: $19425.25
//Balance remaining after third payment: $19135.71

//提示：每个月的贷款余额减去还款金额后，还需要加上贷款余额与月利率的乘积。月利率的计算方法是把用户输入的利率转换成百分数再除以12
#include <stdio.h>
int main(){
    float amout,rate,payment,m1,m2,m3;
    printf("Enter amout of loan:");
    scanf("%f",&amout);
    printf("Enter interest rate:");
    scanf("%f",&rate);
    printf("Enter monthly payment:");
    scanf("%f",&payment);
    m1 = amout+amout*rate/100/12-payment;
    m2 = m1+m1*rate/100/12-payment;
    m3 = m2+m2*rate/100/12-payment;
    printf("Balance remaining after first payment:$%.2f\n",m1);
    printf("Balance remaining after second payment:$%.2f\n",m2);
    printf("Balance remaining after third payment:$%.2f\n",m3);
    return 0;


}