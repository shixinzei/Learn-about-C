#include <stdio.h>
#include <string.h>
void main()
{
    char *str[]={"turbo c","turbo pascal","basic","dbase","lisp","fortran"};
    int i,j,n;
    char *temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(str[i],str[j])>0){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%s\n",str[i]);
    }
}
