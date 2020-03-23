#include <stdio.h>
void main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("a=%d b=%d c=%d\n",a,b,c);
	if(a>b){
		if(a<c){
			printf("a is the middle.\n");
		}else if(b>c){
			printf("b is the middle.\n");
		}else{
			printf("c is the middle.\n");
		}
	}else if(a>c){
		printf("c is the middle.\n");
	}else if(b>c){
		printf("c is the middle.\n");
	}else{
		printf("b is the middle.\n");
	}
}
