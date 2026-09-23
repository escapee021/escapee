#include <stdio.h>

int main() {
  int i, sum;
  
  for(sum = 0,i = 1;  i <= 1000; i++){     
    sum += i;
  }
  
  printf("1到100整数求和为%d\n",sum);
  
  return 0;
}