/* power.c */
#include <stdio.h>      //Function prototype.Calculating the y power of m. 
int power(int y,int m){
	int result=1;
	while(m>0){
		result = result * y; 
		m = m - 1; 
	}
	return result;
}
int main() {
	int x=6,n=3;
	printf("%d power of %d equals: %d\n",x,n,power(x,n));
	printf("2 power of 8 equals: %d\n",power(2,8));
	printf("3 power of 4 equals: %d\n",power(3,4));
	return 0;
}

