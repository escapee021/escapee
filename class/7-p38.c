#include <stdio.h>
#define N 10

int main() {
  double ident[N][N];//矩阵
  int row, col;

  for (row = 0; row < N; row++)
    for (col = 0; col < N; col++)
	  if (row == col)
	    ident[row][col] = 1.0;
	  else
	    ident[row][col] = 0.0;//单位矩阵
        
  return 0;
}