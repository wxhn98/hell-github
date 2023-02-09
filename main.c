#include<stdio.h>
#define MONTHS 12
int main()

{
    int days[MONTHS]={31,28,31,30,31,30,31,31,30,31,30,31};
    int w;
    for(w=0;w<MONTHS;w++)
        printf("Month %2d has %2d days.\n",w+1,days[w]);

    return 0;
}
