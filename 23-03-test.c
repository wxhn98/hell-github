#include<stdio.h>
//#include<stdlib.h>

int main()
{
	int i,m;
	scanf("%d",&m);
	printf("%d=",m);
	for(i=2;i<=m;i++)
	{
		while(m!=i)
		{
			if(m%i == 0)
			{
				printf("%d*",i);
				m=m/i;
			}
			else
				break;	
		}
	}
	printf("%d",m);
    
    getchar();
	return 0;
}