#include<stdio.h>
/*int main()       
{
	int i,m=1;
	for(i=1;i<=9;i++)
	{
		m=2*(m+1);
		
	}
	printf("%d",m);

    return 0;
}*/

int main()       
{
    int i, m = 1;
    for(i = 1; i <= 9; i++)
    {
        m = (m << 1) + 2;
    }
    printf("%d", m);
    return 0;
}