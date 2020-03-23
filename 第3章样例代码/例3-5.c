#include <stdio.h>
void main()
{
	float x,y;
	char ch;
	printf("input two real numbers and an operator\n");
	scanf("%f %f %c",&x,&y,&ch);
	switch(ch){
		case '+':printf("x+y=%f\n",x+y);break;
		case '-':printf("x-y=%f\n",x-y);break;
		case '*':printf("x*y=%f\n",x*y);break;
		case '/':if(y!=0.0) printf("x/y=%f\n",x/y);
				 else printf("x can not be devided by 0.0\n"); break;
		default:printf("invalid operator\n");
	}
}
