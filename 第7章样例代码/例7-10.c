#include <stdio.h>
#include <stdlib.h>
//¶¯Ì¬·ÖÅäÄÚ´æ
void main()
{
    int i,n,*p;
    printf("Enter n:\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        *(p+i)=i+1;
    }
    for(i=0;i<n;i++){
        printf("%5d",*(p+i));
    }
    printf("\n");
    free(p);
}
