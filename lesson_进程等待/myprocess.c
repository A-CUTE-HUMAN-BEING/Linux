#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main()
{
    pid_t id = fork();
    if(id == 0)
    {
        // child
        int cnt = 5;
        while(cnt)
        {
            printf("Child is running, pid: %d, ppid: %d,cnt:%d\n", getpid(), getppid(),cnt);
            sleep(1);
            cnt--;
        }
        exit(1);
    }
    int status = 0;
    pid_t rid = waitpid(id, &status, 0); // 阻塞等待
    if(rid > 0)
    {
//status&0x7F=获取低七位 (status>>8)&0xFF=获取倒数第八位开始算
        printf("wait success, rid: %d, status: %d,exit signo:%d,exit code:%d \n", rid, status,status&0x7F,(status>>8)&0xFF);
    }

    return 0;
}
