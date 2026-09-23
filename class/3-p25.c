/* globle.c */
#include<stdio.h>

int i=1; /* 全局变量 */
void fun() {
  i=i+2;
}

int main() {
  printf("NO. %d \n",i);
  fun();
  printf("i=%d\n",i);
  return 0;
}
