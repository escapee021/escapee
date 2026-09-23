#include <stdio.h>
int main(){
  int i, j;
  float x, y;
  
  printf("Please enter two integers and two floating-point numbers: \n");
  
  scanf("%d%d%f%f", &i, &j, &x, &y);
  
  printf("%d %d %.2f %.3f\n", i, j, x, y);//误差问题
  
  return 0;
}