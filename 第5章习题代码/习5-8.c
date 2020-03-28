#include <stdio.h>
void main()
{
    char *point;
    long int b_addr,e_addr,i,j;
    printf("enter the start and end addr:\n");
    scanf("%lx%lx",&b_addr,&e_addr);
    for(i=b_addr;i<e_addr;i+=16){
        printf("%05lx:",i);
        point=(char*)i;
        for(j=0;j<16;j++){
            if(j==8) printf("    ");
            printf("%02x",*point);
            point++;
        }
        printf("\n");
    }
}
