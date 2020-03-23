#include <stdio.h>
void main()
{
	int num,k,i,j,m;
	char ch;
	i=0;
	scanf("%d %d",&num,&k);
	m=num;
	do{
		j=num%16;
		num/=16;
		i++;
	}while((num!=0)&&(i<k));
	j=i<k?0:j;
	ch=j<9?j+'0':j-10+'a';
	printf("The %ldth digit of the hexadecimal number 0x%04x is %c.\n",k,m,ch);
}
