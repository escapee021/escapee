/* bubble.c */
#include <stdio.h>
#define N 10

int main(void)
{
  int arr[N] = {3,5,9,-7,6,19,-6,8,10,2};
  int temp, i, j;
  int flag=1;

  for (i=0; i<N-1&&flag==1; i++) //i<N-1和 flag为1同时满足才继续循环 
  {  
    flag=0; // flag为0表明暂时元素没有互换

    for (j=0; j<N-1-i; j++) //内循环为每趟比较的次数，第i趟比较N-i次 
    { 
      if (arr[j] > arr[j+1]) //正排序：相邻元素比较，若逆序则交换
      //if (arr[j] < arr[j+1]) //逆排序
      {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        flag=1; //元素互换了，flag置为1 
      }
    }
  }

  for (i=0; i<N; i++)  //输出排序后的结果 
    printf ("%d ", arr[i]);

  return 0;
}
