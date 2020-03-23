#include <stdio.h>
void main()
{
	int d,i,j,k,flag1=0,flag2=0;
	scanf("%d",&d);
	for(i=1;i<=100;i++){
		j=i;
		while(j){
			if(j%10==d){
				flag1=1;
				break;
			}
			j/=10;
		}
		k=i*i;
		while(k){
			if(k%10==d){
				flag2=1;
				break;
			}
			k/=10;
		}
		if(flag1&&flag2){
			printf("%d %d\n",i,i*i);
		}
		flag1=0;
		flag2=0; 
	}
}
