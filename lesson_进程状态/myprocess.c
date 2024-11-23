#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>


int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", a);

    return 0;
}

//const int num = 10;
//
//void Worker()
//{
//    int cnt = 12;
//    while(cnt)
//    {
//        printf("child %d is rnning, cnt: %d\n", getpid(), cnt);
//        cnt--;
//        sleep(1);
//    }
//}
//
//int main()
//{
//    for(int i = 0; i < num ;i++)
//    {
//        pid_t id = fork();
//        if(id < 0) break;
//        if(id == 0){
//            //子进程
//            Worker();
//            exit(0); // C用过, 让子进程直接退出
//        }
//        printf("father create child process success, child pid: %d\n", id);
//        sleep(1);
//    }
//
//    //只有父进程会执行到这里！
//    sleep(15);
//
//    return 0;
//}


//int main()
//{
//    printf("before fork: I am a prcess, pid: %d, ppid: %d\n", getpid(), getppid());
//
//    sleep(5);
//    printf("开始创建进程啦!\n");
//    sleep(1);
//    pid_t id = fork();
//    if(id < 0) return 1;
//    else if(id == 0)
//    {
//        // 子进程
//        while(1){
//            printf("after fork, 我是子进程: I am a prcess, pid: %d, ppid: %d, return id: %d\n", getpid(), getppid(), id);
//            sleep(1);
//        }
//    }
//    else{
//        // 父进程
//        while(1){
//            printf("after fork, 我是父进程: I am a prcess, pid: %d, ppid: %d, return id: %d\n", getpid(), getppid(), id);
//            sleep(1);
//        }
//    }
//
//
//    sleep(2);
//    return 0;
//}
//

//int main()
//{
//    printf("self pid: %d\n", getpid());
//    printf("更改当前工作目录之前!\n");
//    sleep(20);
//    chdir("/home/whb");
//    printf("更改当前工作目录之后!\n");
//    sleep(10);
//
//
//    FILE *fp = fopen("110.txt", "w");
//    if(fp == NULL) return 1;
//
//    fclose(fp);
//
//    printf("新建文件完成\n");
//    sleep(50);
//
//  ///  pid_t id = getpid();
//  ///  pid_t fid = getppid();
//  ///  while(1)
//  ///  {
//  ///      printf("I am a process! pid: %d, ppid: %d\n", id, fid);
//  ///      sleep(1);
//  ///  }
//}
