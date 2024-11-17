#include<stdio.h>
#include<unistd.h>
#include<string.h>

#define MAX 101
#define LABLE '='
int main()
{
	printf("you can see me             ");
	sleep(3);
	printf("\n");
	printf("##################\n");
	int cnt=10;
	while(cnt>=0)
	{
		printf("%-2d\r",cnt);
		fflush(stdout);
		cnt--;
		sleep(1);
	}
	printf("################\n");
	char bar[MAX];
	memset(bar,'\0',sizeof(bar));

	int i=0;
	while(i<=100)
	{
		printf("%s\r",bar);
		fflush(stdout);
		bar[i++]=LABLE;
		sleep(1);
	}
	printf("\n");

	return 0;
}
