#include<stdio.h>
int main(void)
{
    int a=5;
    while (a<7)
    {
     printf("a=%d\n",a);
     a++;
     printf("Now a=%d\n",a);
    }
    printf("The loop has finished.\n");
    return 0;
}
