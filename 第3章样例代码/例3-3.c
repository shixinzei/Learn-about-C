#include <stdio.h>
void main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("a=%d b=%d c=%d\n",a,b,c);
	if(a>b){
		if(a>c){
			printf("a is the largest!\n");
		}else{
			printf("c is the largest!\n");
		}
	}else if(b>c){
		printf("b is the largest!\n");
	}else{
		printf("c is the largest!\n");
	}
} 
