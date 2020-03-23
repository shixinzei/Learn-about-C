#include <stdio.h>
void main()
{
	int i,j,max=-32768;
	for(j=1;j<=5;j++){
		printf("请输入第%d个整数\n",j);
		scanf("%d",&i);
		if(max<i) max=i;
	}
	printf("max=%d\n",max);
}

#include <stdio.h>
void main()
{
    int i,x,max_x;
    for(i=1;i<=5;i++){
        scanf("%d",&x);
        if(i==1) max_x=x;
        else if(max_x<x) max_x=x;
    }
    printf("max=%d\n",max_x);
}
