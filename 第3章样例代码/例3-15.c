#include <stdio.h>
void main()
{
	char ch_old,ch_new;
	ch_old='.';
	do{
		scanf("%c",&ch_new);
		if(ch_new==ch_old) continue;
		ch_old=ch_new;
		printf("%1c",ch_old);
	}while(ch_new!='.');
	printf("\n");
} 
