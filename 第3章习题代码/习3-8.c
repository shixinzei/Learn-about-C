#include <stdio.h>
void main()
{
	float x;
	int n;
	printf("Please input a float number and a int number:");
	scanf("%f,%d",&x,&n);
	float result=1;
	int i,j;
	float tmp1=1,tmp2=1;
	for(i=1;i<=n;i++){
		tmp1*=i;
		tmp2*=x;
		result+=tmp2/tmp1;
	}
	printf("e^%f=%.20f\n",x,result);
}
