#include <stdio.h>
void main()
{
	float x,y;
	char ch;
	printf("Enter your selection:\n");
	printf("1:Find square of a number\n");
	printf("2:Find cube of a number\n");
	printf("3:Find sum of square of two number\n");
	scanf("%c",&ch);
	switch(ch){
		case '1':
			printf("Enter a number\n");
			scanf("%f",&x);
			printf("The square of %f is %f\n",x,x*x);
			break;
		case '2':
			printf("Enter a number\n");
			scanf("%f",&x);
			printf("The cube of %f is %f\n",x,x*x*x);
			break;
		case '3':
			printf("Enter two numbers\n");
			scanf("%f %f",&x,&y);
			printf("The sum of square of %f and %f is %f",x,y,x*x+y*y);
			break;
		default:
			printf("Invalid selection\n");
	}
}
