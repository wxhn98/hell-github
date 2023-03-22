//多次修改后编译成功

#include <stdio.h>
    //int n;
    //int i = 0;
void exchange(int arr[],int n)
{
	//int i = 0;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int p;
                p = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = p;
			}
		}
	}
}
int main(void)
{
    int n;
    printf("请输入数组元素的个数：");
    scanf("%d", &n);
    int arr[n];
    printf("请输入数组元素：\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("输入的第%d个元素是",i + 1);
        scanf("%d", &arr[i]);
    }

    exchange(arr,n);

    printf("排序后的结果是：\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
