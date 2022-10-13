#include <stdio.h>
#include <pthread.h>

int arr[10]={1,2,3,4,5,6,7,8,9,10};
int par_sum1=0,par_sum2=0;

void *sum(void* ptr){
  int srt_index=*(int *)ptr;
  int i=srt_index;

    if(srt_index<5){
      for(int i=0;i<=4;i++){
        par_sum1+=arr[i];
      }
    if(srt_index<10){
      for(int i=0;i<=9;i++)
        par_sum2+=arr[i];  
      }
    else{
      printf("invalid index");
      }
    }
  }

int main(){
  pthread_t thread1,thread2;
  int srt_index1=0;
  int srt_index2=5;

  pthread_create(&thread1,NULL,*sum,&srt_index1);
  pthread_create(&thread2,NULL,*sum,&srt_index2);

  pthread_join(thread1,NULL);
  pthread_join(thread2,NULL);
  
  printf("The sum of the first 10 natural numbers is %d\n",par_sum1+par_sum2);
  return 0;
}
