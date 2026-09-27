#include <stdio.h>
#define N 10

int main() {
  int a[N]={0},b[N]={1},i = 0;

  while (i < N)
	a[i] = b[i++]; //错误：表达式 a[i] = b[i++] 访问了 i的值并且修改了 i
  
  for (i = 0; i < N; i++)
	a[i] = b[i]; //正确

  return 0;
}