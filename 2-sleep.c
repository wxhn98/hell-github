//编写代码，演示多个字符从两端移动，向中间汇聚
#include <stdio.h>
#include <string.h>
int  main()
{
	char arr1[] = "hello world";
	char arr2[] = "###########";
	int left = 0;
	int right = strlen(arr2) - 1;//strlen是求数组长度，在string.h中，  数组的下标是从0开始，所以-1.
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}
	return 0;
}
