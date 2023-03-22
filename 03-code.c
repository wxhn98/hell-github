//正常运行冒泡排序，一次输入一个数
//输出数无间隔，可以参考0321-test.c进行修改出间隔？
#include <stdio.h>

void bubble_sort(int arr[], int n) 
{
    int i, j;
    for (i = 0; i < n-1; i++) 
    {
        for (j = 0; j < n-i-1; j++) 
        {
            if (arr[j] > arr[j+1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() 
{
    int n;
    printf("请输入数组元素的个数：");
    scanf("%d", &n);
    
    int arr[n];
    int i;
    for (i = 0; i < n; i++) 
    {
        printf("请输入第%d个随机数", i+1);
        scanf("%d", &arr[i]);
    }
    
    bubble_sort(arr, n);
    
    printf("排序后的结果为：");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    
    return 0;
}