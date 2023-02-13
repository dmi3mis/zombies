#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <wait.h>
int main()
{
  while(true) {
    if (fork() == 0)
    {
      printf("child process started ... and done! (%d)\n",getpid()
);
      return 0;
    } else {
      wait(NULL);
      printf("parent just wont die...\n");
      sleep(3);
      }
  }

}