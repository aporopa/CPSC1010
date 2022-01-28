#include <stdio.h>
#include <math.h>

int main(void) {
   double sphereVolume;
   double sphereRadius;

   scanf("%lf", &sphereRadius);

   sphereVolume = (4.0 / 3.0)*(M_PI)*(sphereRadius * sphereRadius * sphereRadius); //error only because there was no astericks between the math statements 

   printf("%.2lf\n", sphereVolume);

   return 0;
}