#include <stdio.h>

int max(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("请输入三个整数：");
    scanf("%d %d %d", &a, &b, &c);
    int m = max(a, b, c);
    printf("最大值为：%d\n", m);
    return 0;
}

int max(int a, int b, int c)
{
    int m = a;
    if (b > m)
    {
        m = b;
    }
    if (c > m)
    {
        m = c;
    }
    return m;
}

