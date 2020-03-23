#include <stdio.h>
void main()
{
	char i='a';
	char j='b';
	char k='c';
	char m='\101';
	char n='\116';
	printf("a%cb%c\tc%c\tabc\n",i,j,k);
	printf("\tb%c%c",m,n);
}
