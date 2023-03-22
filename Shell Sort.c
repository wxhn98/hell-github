//希尔排序

#include <stdio.h>

void shellSort(int arr[], int n);

int main()
{
    int arr[] = { 5, 2, 8, 1, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("排序前：");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    shellSort(arr, n);
    printf("排序后：");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}

void shellSort(int arr[], int n)
{
    int gap, i, j, temp;
    for (gap = n / 2; gap > 0; gap /= 2) // 步长
    {
        for (i = gap; i < n; i++) // 插入排序
        {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
            {
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
        }
    }
}