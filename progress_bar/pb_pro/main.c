#include"proccessbar.h"

#define FILESIZE 1024*1024*1024

//模拟一种下载任务的场景
void download(callback_t cb)//回调函数
{
	srand(time(NULL)^1023);
	int total=FILESIZE;
	while(total)
	{
		usleep(10000);
		int one=rand()%(1024*1024*10);
		total-=one;
		if(total<0) total=0;

		//当前进度
		int download=FILESIZE-total;
		double rate=(download*1.0/(FILESIZE))*100.0;
		cb(rate);
		//printf("download:%f\n",rate);
	}
}
int main()
{
	//process();
	download(process_flush);	
	return 0;
}
