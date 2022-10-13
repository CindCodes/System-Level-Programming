#include <stdio.h>

 struct item{
char name[10];
double weight;
int productid;
};

void printitems(struct item *ptr, int x){
  for(int i= 0; i<x;i++){
    printf("\nName: %s  product ID: %d  weight: %.2lf\n", ptr->name, ptr->productid, ptr->weight);
    ptr++;
    
  }
}

void getitems(struct item *ptr, int x ){
  struct item *ogPtr;
  ogPtr = ptr;
  int i;
  for(i = 0;i<x;i++){
  
    printf("\nEnter the name of the product: ");
    scanf("%s", ptr -> name);
    printf("\nEnter the product ID: ");
    scanf("%d", &ptr-> productid);
    printf("\nEnter the weight of the product: ");
    scanf("%lf", &ptr-> weight);
    ptr++;
    printitems(ogPtr, i+1);
  } 
}



int main(void) {
  struct item *ptr;
  //ptr = (char*) malloc()
  
  int items;
  printf("Enter the number of records: ");
  scanf("%d", &items);

  ptr =(struct item *) malloc ( sizeof(struct item));
  
  getitems(ptr, items);
  //printitems(ptr, items);
  
  return 0;
}
