#include <stdio.h>
#include<pthread.h>

main(){
  int rc=fork();
  if(rc==0){
    rc=fork();
  }
  printf("Hello\n");
}

void func(int*p){
  (*p)=(*p)+5;
}
