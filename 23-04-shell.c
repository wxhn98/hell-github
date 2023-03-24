//希尔

#include<stdio.h>
#include<stdlib.h>
void Shell_Sort(int *pArr,int size)
{
	int i = 0;
	int key = 0;
	int end = 0;
	int gap = 3;
	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			key = pArr[i];
			end = i - gap;
			while (end >= 0 && key<pArr[end])
			{
				pArr[end + gap] = pArr[end];
				end=end-gap;
			}
			pArr[end + gap] = key;
		}
		gap--;
	}
}
int main()
{
	int i = 0;
	int array[9] = { 2, 6, 4, 9, 5, 8, 7, 0, 1 };
	int size = sizeof(array) / sizeof(array[0]);
	Shell_Sort(array, size);
    system("color 3B");
	for (i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	//system("pause");
    getchar();
	return 0;
}