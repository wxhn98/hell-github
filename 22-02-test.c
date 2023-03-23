#include <stdio.h>
struct Stu
{
    char name[10];
    int age;
    char sex[5];
    double score;

};
void set_age1(struct Stu stu)
{
    stu.age = 18;
}
void set_age2(struct Stu* pStu)
{
    pStu->age = 18;
}
int main()
{
    struct Stu stu;
    struct Stu* pStu = &stu;
 
    stu.age = 20;
    set_age1(stu);

    pStu->age = 20;
    set_age2(pStu);
    return 0;
}