#include <stdio.h>
const int n=7;
void main()
{
	int a[n+1];
	int mid,low=1,high=n;
	int x,i;
	printf("�����������������Ԫ�ص�ֵ:\n");
	for(i=1;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("��������Ҫ���ҵ���:");
	scanf("%d",&x);
	while(low<=high){
		mid=(low+high)/2;
		if(x==a[mid]) break;
		else if(x<a[mid]) high=mid-1;
		else low=mid+1; 
	}
	if(x==a[mid]) printf("���ҵ���λ��Ϊ��%d\n",mid);
	else printf("���ҵ���λ��Ϊ:%d\n",0);
}
