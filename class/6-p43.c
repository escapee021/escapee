#include <stdio.h>

int main() {
  int cmd;
  int balance=2000,credit, debit;

  printf("cmd,0=clear,1=credit,2=debit,3=balance,4=exit.\n");

  for(;;)
  {
    printf("Enter command:");
    scanf("%d",&cmd);

    switch (cmd)
    {
      case 0: balance=0;
        printf("The amount of balance now:%d\n",balance);
        break;  
      case 1: 
        printf("Enter the amount of credit:");
        scanf("%d",&credit);
        balance+=credit;
        printf("The amount of balance now:%d\n",balance);
        break;
      
      case 2: 
        printf("Enter the amount of dedit:");
        scanf("%d",&debit);
        balance-=debit;
        printf("The amount of balance now:%d\n",balance);
        break;
      
      case 3: 
        printf("Current banlance:%d:\n",balance);
        break;
      
      case 4: return 1;
      
      default:
        printf("cmd,0=clear,1=credit,2=debit,3=balance,4=exit.\n");
        break;
     }
  }
  //return 0;
}