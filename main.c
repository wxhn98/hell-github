#include<stdio.h>
#define space ' '
int main(void)
{
    char ch;

    ch = getchar();
    while (ch != '\n')
    {
      if(ch == space)
          putchar(ch);
      else
          putchar(ch+1);
      ch = getchar();
    }
    putchar(ch);
    return 0;
}
