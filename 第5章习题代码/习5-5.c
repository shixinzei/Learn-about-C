#include <stdio.h>
void main()
{
    char data[]="There are some mistakes in the program";
    char *point;
    char array[100];
    int i,length;
    length=0;
    while(data[length]!='\0'){
        length++;
    }
    point=array;
    for(i=0;i<length;i++,point++){
        *point=data[i];
    }
    printf("%s\n",array);
}
