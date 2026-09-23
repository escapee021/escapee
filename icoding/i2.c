#include <stdio.h>
int main(){
    int m,d,y;
    printf("Enter a date (mm/dd/yyyy):");
    scanf("%d/%d/%d",&m,&d,&y);
    printf("You entered the date %d%2.2d%d",y,m,d);
    //记一次修改
    return 0;
}