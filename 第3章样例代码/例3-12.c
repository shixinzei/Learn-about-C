#include <stdio.h>
void main()
{
	char ch;
	int ch_num,dig_num;
	ch_num=dig_num=0;
	do{
		scanf("%c",&ch);
		if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')) ch_num++;
		else if((ch>='0')&&(ch<='9')) dig_num++;
	}while(ch!='.');
	printf("The number of chars is %d.\n",ch_num);
	printf("The number of digital is %d.\n",dig_num);
}
