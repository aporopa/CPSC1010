#include <stdio.h>

double LapsToMiles(double userLaps);

int main(void) {
   
   //double functionOutput;
   double userLaps;

   printf("Enter the number of laps to convert: \n");
   scanf("%lf", &userLaps);
   printf("Laps to miles conversion is: %.2lf\n", LapsToMiles(userLaps));

   return 0;
}

double LapsToMiles(double userLaps){
   
   double milesConversion;
   
   milesConversion = userLaps * 0.25;
   
   return(milesConversion);
}
