#include <stdio.h>

int main() {
  char ch;
  while ((ch = getchar()) != '\n')    //读取键盘并判断
  //while (getchar() != '\n')//?
    printf("输入键盘字符为：%c\n",ch);
   
   printf("输入键盘字符为:回车健,结束从键盘输入字符的程序");
  return 0;
}