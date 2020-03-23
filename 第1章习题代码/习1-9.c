#include <stdio.h>
main()
{
	int a,b,c,sum;
	printf("请输入3个整数(a,b,c):\n");
	scanf("%d, %d, %d",&a,&b,&c);
	sum=a+b+c;
	printf("三个整数 %d+%d+%d 的和是:%d\n",a,b,c,sum);
}
