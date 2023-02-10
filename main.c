#include<stdio.h>
#define width 30
int starbar();
int main(void)

{
    starbar();
    printf("            ");
    printf("hhhh\n");
    starbar();
    return 0;
}

int starbar()
{
    int count;
    for(count=1;count<=width;count++)
        putchar('*');
    putchar('\n');
    return 0;
}

