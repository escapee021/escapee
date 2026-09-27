//repdigit.c
/* Checks numbers for repeated digits */
#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
  bool digit_seen[10] = {false};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;//得到n的个位
    
    if (digit_seen[digit]){
      printf("%d\n",digit) ;
      break;//重复数字退出，此时 n>0
    }
    digit_seen[digit] = true;
    n /= 10;  //丢掉n的个位
    }
  
  if (n > 0) printf("Repeated digit\n");
  else printf("No repeated digit\n");
  
  return 0;
}
