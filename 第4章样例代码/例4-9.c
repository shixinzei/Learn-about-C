//˳����� 
#include <stdio.h> 
const int n=7;
void main()
{
	int a[n+1];
	int x;
	int i;
	printf("����������Ԫ�ص�ֵ:\n");
	for(i=1;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("��������Ҫ���ҵ���:");
	scanf("%d",&x);
	a[0]=x;
	for(i=n;a[i]!=x;i--);
	printf("���ҵ���λ��Ϊ:%d\n",i);
}
