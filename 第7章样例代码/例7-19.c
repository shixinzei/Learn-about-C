#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,j,k,ii,n,m,t,*p1;
    float tt,sum=0,*p2,*p3;
    printf("请输入参赛选手人数和评委人数:\n");
    scanf("%d%d",&n,&m);
    p1=(int*)calloc(n,sizeof(int));
    p3=(float*)calloc(n,sizeof(float));
    for(ii=0;ii<n;ii++){
        scanf("%d",(p1+ii));
        p2=(float*)calloc(m,sizeof(float));
        for(j=0;j<m;j++){
            scanf("%f",(p2+j));
        }
        printf("第%d号选手\n",ii+1);
        for(i=0;i<m-1;i++){
            for(j=i+1;j<m;j++){
                if(p2[i]<p2[j]){
                    tt=p2[i];
                    p2[i]=p2[j];
                    p2[j]=tt;
                }
            }
        }
        sum=0;
        for(k=2;k<m-2;k++){
            sum+=p2[k];
        }
        p3[ii]=sum/(m-4);
        printf("第%d号选手得分：%5.3f\n",ii+1,p3[ii]);
        free(p2);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(p3[i]<p3[j]){
                tt=p3[i];
                p3[i]=p3[j];
                p3[j]=tt;
                t=p1[i];
                p1[i]=p1[j];
                p1[j]=t;
            }
        }
    }
    printf("-------------决赛最后成绩------------\n");
    printf("名词\t\t编号\t\t成绩\n");
    for(i=0;i<n;i++){
        printf("%d\t\t%d\t\t%5.3f\n",i+1,p1[i],p3[i]);
    }
    printf("--------------------------------\n");
    free(p1);
    free(p3);
}
