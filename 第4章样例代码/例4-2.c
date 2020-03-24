#include <stdio.h>
#include <math.h>
void main()
{
	int prime[201]={0};
	int d,k,i;
	for(d=2;d<=sqrt(200);d++){
		if(prime[d]==0){
			for(k=2*d;k<=200;k+=d){
				prime[k]=1;//筛去d的所有倍数 
			}
		}
	}
	k=0;
	for(i=2;i<=200;i++){
		if(prime[i]==0){
			printf("%d\t",i);
			k++;
			if(k%5==0){
				printf("\n");
			}
		}
	}
}
