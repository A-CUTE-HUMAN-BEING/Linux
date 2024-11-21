#include<stdio.h>
#include<stdio.h>

int main(int n, char* news[])
{
    //以下效果一样
    for (int i = 0; news[i]; i++)
    {
        printf("第%d条环境变量：%s",i+1,news[i]);
    }
    return 0;
}


