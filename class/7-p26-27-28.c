#include <stdio.h>

int main() {
  int a[10], i;

  printf(" %d\n",sizeof(a));

  printf(" %d\n",sizeof(a[0]));
  printf(" %d\n",sizeof(i));

  printf(" %d\n",sizeof(a)/sizeof(a[0]));


  return 0;
}