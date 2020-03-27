#include <stdio.h>
void main()
{
    char *point[]={"one","two","three","four"};
    point[2]=point[0];
    printf("%s\n",point[2]++);
    printf("%s",point[2]);
}
