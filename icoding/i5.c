#include <stdio.h>
int main(){
    float amount;
    printf("Enter an amount:");
    scanf("%f",&amount);
    printf("with tax added: $%.2f",amount*1.05);
    return 0;
}