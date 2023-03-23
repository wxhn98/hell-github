
#include<stdio.h>
#include"22-03-sum_arr2.h"
int main(void)
{   
    struct Student stu1 = {"aaaa",9};

    printf("%s\n",stu1.name);
    printf("%d",stu1.age);
    return 0;
}