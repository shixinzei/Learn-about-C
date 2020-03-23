#include <stdio.h>
void main()
{
	int a,b,x;
	scanf("%d %d",&a,&b);
	if(a<b){
		x=a;
		a=b;
		b=x;
		printf("a=%d b=%d\n",a,b);
	}else{
		printf("No Swap!\n");
	}
} 
