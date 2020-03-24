#include <stdio.h>
void main()
{
    int f[15],i;
    int *p=f;
    *p=0;
    *(p+1)=1;
    printf("%4d%4d",*p,*(p+1));
    p+=2;
    for(i=2;i<15;i++){
        *p=*(p-1)+*(p-2);
        printf("%4d",*p);
        p++;
    }
}
