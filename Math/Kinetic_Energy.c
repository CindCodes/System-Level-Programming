#include <math.h>
#include <stdio.h>

  double velocitCalc(double t){
  double v;
  double g = 9.8;
  v = g*t;
  return v;
}
  double kineticCalc(double v, double m){
  double kE;
  kE = (m/2)*(v*v);
  return kE;
}
  double calcTime(double h){
  double g;
  g = 9.8;
  double t;
  t = sqrt(2*h/g);
  return t; 
}
int main(void) {
  double m;
  printf("Enter the mass(m) of the object thrown (in kilograms): ");
  scanf("%lf", &m);
  
  double h;
  printf("Enter the height(h) from which the object is dropped in meters: ");
  scanf("%lf", &h);
  
  double time = calcTime(h);
  double velocity = velocitCalc(time);
  double kineticEnergy = kineticCalc(velocity, m);
  
 printf("The time taken by an object weighing %.2lf kilograms to reach the ground when dropped from a height of %.2lf meters = %.2lf.\n",m, h, time);
  
printf("The velocity of the object when it hits the ground = %.2lf m/s.\n",velocity);
  
  printf("The kinetic energy of the object thrown = %.2lf Joules.\n",kineticEnergy);
  
  return 0;
}
