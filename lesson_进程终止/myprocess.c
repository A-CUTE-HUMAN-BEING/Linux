#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

//enum{
//success=0,
//    open_err,
//    malloc_err
//};
//
//const char* errorToDesc(int code)
//{
//    switch(code)
//    {
//        case success:
//            return "success";
//        case open_err:
//            return "file open error";
//        case malloc_err:
//            return "malloc error";
//        default:
//            return "unknown error";
//    }
//}
//
//int main()
//{
//    int code = malloc_err;
//    printf("%s\n", errorToDesc(code));
//    return code;
//}
////和上面自定义错误返回值一样

//int main()
//{
//for(int i = 0; i < 200; i++)
//{
//    printf("%d: %s\n", i, strerror(i));
//}
//    return 0;
//}
//以上这个for循环是查看不同数字代表的退出原因


//int main()
//{
//     FILE *fp = fopen("./log.txt", "r");
////不存在该文件，打开会错误
//     printf("%d:%s\n", errno, strerror(errno));
////查看是否运行成功和错误原因
//    return errno;
//}
//退出错误码

//int main()
//{
//    int *p = NULL;
//    while(1)
//    {
//        printf("process is running, pid: %d\n\n", getpid());
//        sleep(1);
//
//        *p = 100;
//    }
//}
//测试进程异常

//void Print()
//{
//    printf("hello Print\n");
//    //_exit(4);
//}
//
//
//int main()
//{
//    printf("hello Linux, hello bite");
//
//    sleep(3);
//
//    _exit(1);
//
//
//
////    while(1)
////    {
////        printf("I am a process: %d\n", getpid());
////        sleep(1);
////        Print();
////        _exit(3); // exit终止进程, status:进程退出的时候，退出码
////    }
//}
////exit
