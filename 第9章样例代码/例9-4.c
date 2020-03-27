#include <stdio.h>
#define MAXLEN 81
void main()
{
    char message[MAXLEN];
    puts("Enter your message:");
    gets(message);
    puts("your message is:");
    puts(message);
}
