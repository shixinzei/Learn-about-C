#include <stdio.h>
void main()
{
	int i,j,result=0;
	scanf("%d",&i);
	if(i<=5){
		for(j=1;j<=i;j++){
			result+=j;
		}
	}else if(i<=10){
		result+=100;
		for(j=1;j<=i;j++){
			result-=j;
		}
	}else{
		result=i*i;
	}
	printf("%d\n",result);
}
