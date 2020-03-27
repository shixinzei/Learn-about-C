#include <stdio.h>
void main()
{
    char *point[]={"one","two","three","four"};
    while(*point[2]!='\0'){
        printf("%c",*point[2]++);
    }
}
