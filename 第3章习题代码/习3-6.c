#include <stdio.h>
void main()
{
	float x,result=1.0;
	int y,i;
	printf("Please input a float and a integer:");
	scanf("%f %d",&x,&y);
	for(i=1;i<=y;i++){
		result*=x;
	}
	printf("%6.2f^%d=%f\n",x,y,result);
}
