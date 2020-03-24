#include <stdio.h>
void main()
{
    int i;
    char *color[]={
        "black",
        "brown",
        "red",
        "orange",
        "yellow",
        "blue",
        "gray",
        "white",
        "violet"
    };
    printf("Enter a number\n");
    scanf("%d",&i);
    printf("i=%d\n",i);
    printf("%s\n",color[i]);
}
