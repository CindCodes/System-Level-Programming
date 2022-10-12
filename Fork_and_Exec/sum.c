#include <stdio.h>
#include <unistd.h>

int main(void) {
  int arr[10]; 
  int sum=0;
  int i;
  for(i=0;i<10;i++){
   arr[i]=i+1;
  }
  for(i=0;i<10;i++){
      sum+=arr[i];
  }
  printf("The sum of the first 10 integers is %d",sum);
  return 0;
}
