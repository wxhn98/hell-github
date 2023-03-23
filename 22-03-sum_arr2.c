//固定数组内元素之和

#include<stdio.h>
//自定义头文件，引用
#include"22-03-sum_arr2.h"
//#define SIZE 20
int sump(int *start, int *end);
int main(void)
{
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20,90,39,999};
    long answer;
    
    answer = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld.\n",answer);

    return 0;
}
int sump(int *start, int *end)
{
    int total = 0;
    while(start < end)
    {
        total +=*start;
        start++;
    }
    return total;
}