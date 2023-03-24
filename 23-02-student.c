#include <stdio.h>
#include"general.h"

int main()
{
	// struct students
	// {
	// 	char name[20];
	// 	int age;
	// };

	struct students stu[NUM]={
        {"Allen",18},
        {"Smith",19},
        {"Grace",18}};

	printf("姓名    年龄\n\n");
	for(int i=0;i<NUM;i++)
	{
		printf("%s    %d\n\n",stu[i].name,stu[i].age);
	}
 
	return 0;
}