#include <stdio.h>
#include <pthread.h>
int thread_count=0;
void *thread(void *ptr){
  thread_count++;
  if(thread_count==2){
    char *argv[]={"/bin/ls",NULL};
    execv("argv,argv");
    }
  else{
    printf("Thread count=%d\n",thread_count);
    }
  }
int main(){
  int i;
  for(i=0;i<2;i++){
    pthread_t*var=(pthread_t*)malloc(sizeof(pthread_t));
    pthread_create(var,NULL,thread,NULL);
    pthread_join(*var,NULL);
  }
  return 0;
}
