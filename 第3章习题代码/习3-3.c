#include <stdio.h>
void main()
{
	float height,weight,stdweight;
	printf("请输入某人的身高(cm),体重(kg)\n");
	scanf("%f,%f",&height,&weight);
	stdweight=height-110;
	if(weight-stdweight>5){
		printf("过胖!\n");
	}else if(stdweight-weight>5){
		printf("过瘦!\n");
	}else{
		printf("标准!\n");
	}
}
