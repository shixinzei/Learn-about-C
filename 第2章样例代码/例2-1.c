#include <stdio.h>
//main函数开始程序的运行 
void main()
{
	//变量的定义与赋值 
	int i=60,j=60,k=60;
	i=j==k;
	printf("i=%d,j=%d,k=%d\n",i,j,k);
	i==(j=k++*2);
	printf("i=%d,j=%d,k=%d\n",i,j,k);
	i=j>k>=100;
	printf("i=%d,j=%d,j=%d\n",i,j,k);
}
