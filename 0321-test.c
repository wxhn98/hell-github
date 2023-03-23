
#include <stdio.h>
#include"22-03-sum_arr2.h"
void print(int n)
{
    if(n>9)
    {
        print(n/10);
    }
    printf("%d ", n%10);
}
 
int main()
{
    int num = 1234;
    print(num);
    printf("\n");
    printf("%d\n",SIZE);
    
    return 0;
}