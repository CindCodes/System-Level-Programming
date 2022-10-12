#include <math.h>
#include <stdio.h>

const float PI = 3.14;
float Area(){
  int r;
  int h;
  FILE *data;
  data = fopen("data","r");       
  fscanf(data,"%d %d",&r,&h);
  fclose(data);
  float area;
  area = PI*r*(r+sqrt(pow(r,2)+pow(h,2)));
  return area;
  }
int main() {
  FILE *data = fopen("data","w");  
  int r;
  int h;
  printf("Enter the radius of the cone:\n");
  scanf("%d",&r);
  printf("Enter the height of the cone:\n");
  scanf("%d",&h);
  fprintf(data,"%d %d",r,h);
  fclose(data);
  float ans = Area();
  printf("The area of the cone is: %.6f", ans);
  return 0;
}
