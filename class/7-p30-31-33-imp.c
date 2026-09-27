/* bubble.c */
#include <stdio.h>
#define N 10

int main(void)
{
  int arr[N] = {3,5,9,-7,6,19,-6,8,10,2};
  int temp, i, j;

  for (i=0; i<N-1; i++) //外循环为排序趟数，N个数进行N-1趟 
    for (j=0; j<N-1-i; j++) //内循环为每趟比较的次数，第i趟比较N-i次 
    { 
      //if (arr[j] > arr[j+1]) //正排序：相邻元素比较，若逆序则交换
      if (arr[j] < arr[j+1]) //逆排序
      {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
 
  for (i=0; i<N; i++)  //输出排序后的结果 
    printf ("%d ", arr[i]);

  return 0;
}
