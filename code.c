#include<stdio.h>
int main(void)
{
    int arr[5] = {3,5,2,4,1};
    int i;
    int j;

    for(i = 0;i < 4;i++)
    {
        for(j = 0;j < 4-i;j++)
        {
            if (arr[j] > arr[j+1])
            {
                int n;
                n = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = n;
            }
            
        }

    }
    for(i = 0;i < 5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}