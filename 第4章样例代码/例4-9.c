//顺序查找 
#include <stdio.h> 
const int n=7;
void main()
{
	int a[n+1];
	int x;
	int i;
	printf("请输入数组元素的值:\n");
	for(i=1;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("请输入您要查找的数:");
	scanf("%d",&x);
	a[0]=x;
	for(i=n;a[i]!=x;i--);
	printf("查找到的位置为:%d\n",i);
}
