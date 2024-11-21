#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

//int main()
//{
//   const char *username=getenv("USER");
//   if(strcmp(username, "cc")==0 || strcmp(username, "root") ==0)
//   {
//       printf("this is my process core function\n");
//   }
//   else
//   {
//       printf("你没有权限\n");
//   }
//   //if(username)printf("username: %s\n", username);
//   //else printf("None\n");
//   return 0;





// 要实现三种不同的功能 
// ./myprocess -3
// ./myprocess -add 1 2
//int main(int argc, char *argv[], char *env[])
int main(int argc, char *argv[])
{
//    printf("I am a process, pid: %d, ppid: %d\n", getpid(), getppid());
//    for(int i = 0; env[i]; i++)
//    {
//        printf("-----------env[%d] -> %s\n", i, env[i]);
//    }
//
//    pid_t id = fork();
//    if(id == 0)
//    {
//        printf("-----------------------------------------------");
//        printf("I am a child, pid: %d, ppid: %d\n", getpid(), getppid());
//        for(int i = 0; env[i]; i++)
//        {
//            printf("-----------env[%d] -> %s\n", i, env[i]);
//        }
//    }
//
//    sleep(1);
if(argc != 4)
{
    printf("Usage:\n\t%s -[add|sub|mul|div] x y\n\n", argv[0]);
    return 1;
}
    int x = atoi(argv[2]);
    int y = atoi(argv[3]);
//
    if(strcmp("-add", argv[1]) == 0)
    {
    printf("%d+%d=%d\n", x, y, x+y);
}
else if(strcmp("-sub", argv[1]) == 0)
{
    printf("%d-%d=%d\n", x, y, x-y);
}
else if(strcmp("-mul", argv[1]) == 0)
{
    printf("%d*%d=%d\n", x, y, x*y);
}
else
{
    printf("unknown!\n");
}

//
//
//
//
//
//
//
//
 for(int i = 0; argv[i]; i++)
 {
     printf("argv[%d]: %s\n", i, argv[i]);
 }
// for(int i = 0; i < argc; i++)
// {
//     printf("argv[%d]: %s\n", i, argv[i]);
// }
    return 0;
}
