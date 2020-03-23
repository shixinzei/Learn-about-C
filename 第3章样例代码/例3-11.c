#include <stdio.h>
void main()
{
	int num;
	scanf("%d",&num);
	int i,sum=1;
	for(i=0;sum<num;i++){
		printf("%d %d\n",i,sum);
		sum*=2;
	}
}
