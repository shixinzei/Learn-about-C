#include <stdio.h>
void main()
{
	int cardnum;
	char name[20];
	printf("****************");
	printf("**欢迎进入中文图书馆管理程序******");
	printf("****************");
	printf("~~~~~~\t\t\t~~~~~\n");
	printf("请输入卡号：\n");
	scanf("%d",&cardnum);
	printf("请输入您的姓名：\n");
	scanf("%s",&name);
	printf("\n 欢迎您,%s！您的卡号是:%d\n",name,cardnum);
}
