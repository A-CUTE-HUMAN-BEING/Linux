#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

//int main()
//{
//	pid_t id=getpid( );
//	pid_t pid=getppid( );
//    while(1)
//	{
//		printf("my name is process,pid:%d,ppid:%d\n",id,pid);
//		sleep(1);
//	}
//	return 0;
//}


int main()
{
    printf("BRFOR I am a process,pid:%d,ppid:%d\n",getpid(),getppid());

    pid_t id=fork();

    printf("AFTER I am a process,pid:%d.ppid:%d   return id:%d\n",getpid(),getppid(),id);
    
    sleep(2);
    return 0;
}
