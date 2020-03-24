#include <stdio.h>
const int n=6;
void main()
{
	int a[n];
	int i,j,temp;
	printf("ÇëÊäÈë´ıÅÅĞòµÄÔªËØ:\n");
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
