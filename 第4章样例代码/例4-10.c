#include <stdio.h>
const int n=7;
void main()
{
	int a[n+1];
	int mid,low=1,high=n;
	int x,i;
	printf("请输入已排序的数组元素的值:\n");
	for(i=1;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("请输入您要查找的数:");
	scanf("%d",&x);
	while(low<=high){
		mid=(low+high)/2;
		if(x==a[mid]) break;
		else if(x<a[mid]) high=mid-1;
		else low=mid+1; 
	}
	if(x==a[mid]) printf("查找到的位置为：%d\n",mid);
	else printf("查找到的位置为:%d\n",0);
}
