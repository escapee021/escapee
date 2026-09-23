#include <stdio.h>

int main() {
  int i, sum;

  sum = 0; 
  i = 1;
/*
  while (i <= 100 ) {
    sum += i;
    i++;
  }
*/

  for (i=1;i<=100;i++) {
    sum += i;
  }

  printf("1到100整数求和为%d\n",sum);

  return 0;
}