#include <stdio.h>
void main()
{
	float height,weight,stdweight;
	printf("������ĳ�˵����(cm),����(kg)\n");
	scanf("%f,%f",&height,&weight);
	stdweight=height-110;
	if(weight-stdweight>5){
		printf("����!\n");
	}else if(stdweight-weight>5){
		printf("����!\n");
	}else{
		printf("��׼!\n");
	}
}
