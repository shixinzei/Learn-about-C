#include <stdio.h>
void main()
{
	int score[10];
	int maxScore=0;
	int maxStudent=0;
	int i;
	for(i=0;i<10;i++){
		printf("�������%dλѧ���ĳɼ�:",i);
		scanf("%d",&score[i]);
		if(maxScore<score[i]){
			maxScore=score[i];
		}
	}
	printf("������߷�Ϊ%d\n",maxScore);
	printf("�õ���߷ֵ�ѧ�����Ϊ:\n");
	for(i=0;i<10;i++){
		if(score[i]==maxScore){
			maxStudent++;
			printf("%d\n",i);
		}
	}
	printf("����%dλѧ���õ���߷�\n",maxStudent);
}
