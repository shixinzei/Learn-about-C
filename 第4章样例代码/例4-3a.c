#include <stdio.h>
const int n=6;
void main()
{
	int a[n];
	int i,j,temp,changed=0;
	printf("ÇëÊäÈë´ıÅÅĞòµÄÔªËØ:\n");
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		changed=0;
		for(j=0;j<n-i;j++){
			if(a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				changed=1;
			}
		}
		if(changed==0) break;
	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
