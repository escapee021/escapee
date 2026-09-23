/* add.c */
#include<stdio.h>
int add(int a,int b){
	int result; 	/* 局部变量 */
	result=a+b; 	/* 修改只在add 函数内有效 */
	return result;
}

int main(){
	int x=6,y=3;
	printf("%d add %d equals: %d\n",x,y,add(x,y));
	return 0;
}
