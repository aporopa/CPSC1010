#include <math.h>
#include <stdio.h>

int main() {
   
   double radiusCylinder = 0;
   double heightCylinder = 0;
   double totalVolume = 0;
   double totalArea = 0;

   scanf("%lf %lf", &radiusCylinder, &heightCylinder);
   
   totalVolume = (M_PI) * (pow(radiusCylinder, 2)) * heightCylinder;
   totalArea = (2.0 * (M_PI) * radiusCylinder * heightCylinder) + (2.0 * (M_PI) * (pow(radiusCylinder, 2)));
   
   
   printf("Volume: %0.1lf cubic inches\n", totalVolume);
   printf("Surface area: %0.1lf square inches\n", totalArea);

   return 0;
}
