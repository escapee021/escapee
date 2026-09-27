#include <stdio.h>
#define N 10

int main() {
  int a[N], i, sum=0;

  for (i = 0; i < N; i++)
	a[i] = 0;             // clears a 
  
  printf("输入10个数到数组:\n");
  for (i = 0; i < N; i++)
	scanf("%d", &a[i]);   // reads data into a 
  
  for (i = 0; i < N; i++)
	sum += a[i];          // sums the elements of a 
  
  printf("数组元素值总和为：%d\n",sum);

  return 0;
}