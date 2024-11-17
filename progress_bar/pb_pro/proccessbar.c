#include "proccessbar.h"
//version1
const char *lable="|/-\\";
void process()
{
	printf("\n");
	//const int n=101;
	//char buffer[n];
	char buffer[NUM];
	memset(buffer,'\0',sizeof(buffer));
	int cnt=0;
	buffer[0]=Head;
	while(cnt<=100)
	{
		printf("[%-100s][%d%%][%c]\r",buffer,cnt,lable[cnt%4]);
		fflush(stdout);
		buffer[cnt++]=Body;
		if(cnt<100)
		{
			buffer[cnt]=Head;
		}
		usleep(100000);
	}
	printf("\n");
}

//version2
char buffer[NUM]={0};
void process_flush(double rate)
{
	static int cnt=0;
	int n=strlen(lable);
	if(rate<=1.0) buffer[0]=Head;
    printf("[\033[0;34;43m%-100s\033[0m][%.1f%%][%c]\r",buffer,rate,lable[cnt%n]);
	fflush(stdout);

	buffer[(int)rate]=Body;
	if((int)rate+1<100)
	{
		buffer[(int)rate+1]=Head;
	}
	if(rate>=100.0) printf("\n");
	
	cnt++;
	cnt%=n;
}

