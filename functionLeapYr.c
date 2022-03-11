#include <stdio.h>
#include <stdbool.h>

//function prototype
int DaysInFeb (int userYear);

int main(void){

   int userYear;

   //prompt user for input
   printf("Please enter a year: \n");
   scanf("%d", &userYear);

   //call for function within prin statement
   printf("There were %d days in February in the year %d.\n", DaysInFeb(userYear), userYear);

   return 0;
}

//function definition
int DaysInFeb (int userYear){
   int amountOfDays;

   //logic for calculating a leap year
   if((userYear % 400 == 0)){
      amountOfDays = 29;
   }
   else if((userYear % 4 == 0) && !(userYear % 100 == 0)){
      amountOfDays = 29;
   }
   else{
      amountOfDays = 28;
   }

   return(amountOfDays); //once iterated through the if statements, the correct days of the month will be the output
}
