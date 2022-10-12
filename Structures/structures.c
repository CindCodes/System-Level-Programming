#include <stdio.h>

struct Item{
  char name[10];
  double weight;
  int productID;
};

void printItems(struct Item *ptr,int records){
  for(int i=0;i<records;i++){
    printf("\nName: %s product ID: %d weight: %.2lf\n",ptr->name,ptr->productID,ptr->weight);
    ptr++;
  }
}
void getItems(struct Item *ptr,int records){
  struct Item *ptr_item;
  ptr_item = ptr;
  for(int i=0;i<records;i++){
    
  printf("Enter the name of the product:\n");
  scanf("%s",ptr -> name);
  printf("Enter the product ID:\n");
  scanf("%d",&ptr -> productID);
  printf("Enter the weight of the product:\n");
  scanf("%lf",&ptr -> weight);
  ptr++;
  printItems(ptr_item,i+1);
  }
}
int main(void) {
  struct Item *ptr;
  int records;
  printf("Enter the number of records:\n");
  scanf("%d",&records);
  ptr = (struct Item *) malloc(sizeof(struct Item));
  getItems(ptr,records);
  printItems(ptr,records);
  return 0;
}
