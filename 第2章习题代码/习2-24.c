#include <stdio.h>
void main()
{
	float I,s;
	printf("请输入年利率和存款总额:");
	scanf("%f %f",&I,&s);
	s=s*(1+I);
	printf("一年后的本息合计:%.f\n",s);
}
