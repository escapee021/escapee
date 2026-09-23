#include <stdio.h>

int main() {
  char ch;
  
  while ((ch = getchar())== ' ')//吃掉空格
   ;//这里仅一个分号，表示空语句
  while ((ch = getchar()) == ' ') ;//这里仅一个分号，表示空语句

  return 0;
}