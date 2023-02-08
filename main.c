#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    unsigned long num;
    unsigned long div;
    bool isPrime;

    printf("Please enter an integer for analysis;");
    printf("Enter q to quit.\n");
    while(scanf("%1u",&num)==1)
    {
        for(div=2,isPrime=true;(div*div)<=num;div++)
        {
            if(num%div==0)
            {
                if((div*div) !=num)
                    printf("%1u is divisible by %1u and %1u.\n",
                           num,div,num/div);
                else
                    printf("%1u is divisible by %1u .\n",num,div);
                isPrime=false;
            }
        }
        if(isPrime)
            printf("%1u is prime.\n",num);
        printf("Please enter another integer for analysis;");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");
    return 0;
}
