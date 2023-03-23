//数组内元素之和

#include<stdio.h>
long sump(int *start, int *end);
int main(void)
{
    int n;
    printf("请输入数组元素的个数：");
    scanf("%d", &n);
    int marbles[n];
    
    //单个输入数组元素
    for(int i = 0;i < n; i++)
    {
        printf("请输入第%d个元素",i+1);
        scanf("%d",&marbles[i]);
    }

    //n个元素一起输入
    /*printf("请输入数组元素：\n");
   
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marbles[i]);
    }
    */

    long answer;
    
    answer = sump(marbles,marbles + n);
    printf("The number of marbles is %d.\n",answer);

    return 0;
}
long sump(int *start, int *end)
{
    int total = 0;
    while(start < end)
    {
        total +=*start;
        start++;
    }
    return total;
}