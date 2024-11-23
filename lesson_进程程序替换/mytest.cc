#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    for(int i = 0; environ[i]; i++)
    {
        printf("env[%d]: %s\n", i, environ[i]);
    }
//  for(int i = 0; argv[i]; i++)
//  {
//      printf("argv[%d]: %s\n", i, argv[i]);
//  }
//int argc,char *argv[],char *env[]  使用时需要在main括号加入
  cout << "hello C++" << endl;
  cout << "hello C++" << endl;
  cout << "hello C++" << endl;
  cout << "hello C++" << endl;
  cout << "hello C++" << endl;
  cout << "hello C++" << endl;
  cout << "hello C++" << endl;
  cout << "hello C++" << endl;
  cout << "hello C++" << endl;
    return 0;
}
