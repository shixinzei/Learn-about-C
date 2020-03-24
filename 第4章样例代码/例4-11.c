#include <stdio.h>
const int n=7;
void main()
{
	int a[n+1];
	int i,j;
	for(i=1;i<=n;i++){
		printf("ÇëÊäÈë´ýÅÅÐòµÄÊýa[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=2;i<=n;i++){
		a[0]=a[i];
		for(j=i-1;a[0]<a[j];j--){
			a[j+1]=a[j];
		}
		a[j]=a[0];
	}
	for(i=1;i<=n;i++){
		printf("%d\n",a[i]);
	}
}
