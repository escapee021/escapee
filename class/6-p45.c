#include <stdio.h>

int main() {
  int i, n, sum;

  n = 0;
  sum = 0;

  while ( n<10) {
    scanf("%d",&i);

    if (i == 0) 
      continue;//I=1的时候不算
    sum += i;
    n++;
  }

  printf("10次求和为%d\n",sum);

  return 0;
}