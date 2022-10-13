#include <stdio.h>
#include <unistd.h>

int main() {
  int pid=fork();

  if(pid==0){
     printf("The PiD of process executing the child section is %d",getpid());
    execv("./sum.out", NULL);
  }
  else{
    printf("The PID of process executing the parent section is %d\n",getpid());
    wait(NULL);
  }
  return 0;
}
