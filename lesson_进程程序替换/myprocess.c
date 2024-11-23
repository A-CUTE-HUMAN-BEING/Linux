#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

//int main()
//{
//    printf("I am a process, pid: %d\n", getpid());
//    printf("exec begin...\n");
//    execl("usr/bin/ls","ls","-a",NULL);
//    printf("exec end...\n");
//    return 0;
//}


int main()
{
//    char *const env[] ={
//        (char*)"haha=hehe",
//        (char*)"PATH=/",
//        NULL
//    };
    printf("I am a process, pid: %d\n", getpid());
//    //putenv("MYVAL=bbbbbbbbbbbbbbbbbbbbbbbbbbbb");
    pid_t id = fork();
    if(id == 0)
    {
        extern char**environ;
        sleep(1);
        execle("./mytest", "mytest", NULL,environ); // 我们传递环境变量表了吗？？no. 子进程默认就拿到了.他是怎么做到的？
//        //execle("./mytest", "mytest", NULL, env); // 我们传递环境变量表了吗？？no. 子进程默认就拿到了.他是怎么做到的？
//        //execl("/usr/bin/python3", "python3", "test.py", NULL);
//        //execl("/usr/bin/bash", "bash", "test.sh", NULL);
//        execl("./mytest", "mytest","-a","-b","-c", NULL); // 调用了我的c++代码 我们传递环境变量表了吗？？no. 子进程默认就拿到了.他是怎么做到的？
 //       char *const argv[] = {
//          (char*)"ls",
        //    (char*)"-a",
        //    (char*)"-l"
        //};
        //sleep(3);
//printf("exec begin...\n");
//execvp("ls", argv);
//execv("/usr/bin/ls", argv);
//execl("/usr/bin/ls", "ls", "-a", "-l", NULL); //NULL 不是 "NULL"
//execlp("ls", "ls", "-a", "-l", NULL); //NULL 不是 "NULL"
//execl("/usr/bin/top", "/usr/bin/top", NULL); //NULL 不是 "NULL"
        printf("exec end ...\n");
        exit(1);
    }

    pid_t rid = waitpid(id, NULL, 0);
    if(rid > 0)
    {
        printf("wait success\n");
    }
    
    exit(1);
}
