#include <stdio.h>
void main()
{
	int i,j,p;
	printf("   *");
	for(i=1;i<=9;i++){
		printf("%4d",i);
	}
	printf("\n");
	for(i=1;i<=9;i++){
		printf("%4d",i);
		for(j=1;j<=i;j++){
			p=i*j;
			printf("%4d",p);
		}
		printf("\n");
	}
} 
