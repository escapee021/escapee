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
  do {
    sum += i;
    i++;
  } while (i <= 100);

  printf("1到100整数求和为%d\n",sum);

  return 0;
}