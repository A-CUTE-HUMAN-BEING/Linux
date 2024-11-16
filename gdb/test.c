#include<stdio.h>
int sum(int n)
{
	int i=0;
	int j=0;
	for(i=0;i<=n;i++)
	{
		j+=i;	
	}
	return j;
}

int main()
{
	printf("hello,gdb\n");
	int n=sum(100);
	printf("result=%d\n",n);
	return 0;
}
