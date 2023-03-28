#include <stdio.h>
#include <string.h>
#include <windows.h>//sleep()函数
int  main()
{
	char arr1[] = "hello world";
	char arr2[] = "###########";
	int left = 0;
	int right = strlen(arr2) - 1;
	while (left <= right)
	{
		Sleep(3000);//屏幕休眠3秒
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}
	return 0;
}
