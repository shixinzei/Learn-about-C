#include <stdio.h>
//main������ʼ��������� 
void main()
{
	//�����Ķ����븳ֵ 
	int i=60,j=60,k=60;
	i=j==k;
	printf("i=%d,j=%d,k=%d\n",i,j,k);
	i==(j=k++*2);
	printf("i=%d,j=%d,k=%d\n",i,j,k);
	i=j>k>=100;
	printf("i=%d,j=%d,j=%d\n",i,j,k);
}
