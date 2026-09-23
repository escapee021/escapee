/* add1.c */
#include<stdio.h>
int add()
{
  int data1=0;  		/* 局部变量 */
  static int data2=1; 	/* 静态局部变量 ,保留上次运算结果*/
  data1=data1+2;
  data2=data2+4;
  return(data1+data2);
}

int main()
{
  int i=1;
  printf("NO.%d:",i);
  printf("%d\n",add());
  
  i=2;
  printf("NO.%d:",i);
  printf("%d\n",add());
  
  i=3;
  printf("NO.%d:",i);
  printf("%d\n",add());
  return 0;
}

