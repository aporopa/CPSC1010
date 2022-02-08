#include <stdio.h>
#include <stdbool.h>

int main(void) {
   int inputYear;
   bool isLeapYear = false;
   
   scanf("%d", &inputYear);
   
   if((inputYear % 400 == 0)){ //If the mod is 0, that means there is no remainder and the number is automatically a century year that is a leap year too, it does not need to pass any more tests
      isLeapYear = true;
      printf("%d - leap year\n", inputYear);
   }
   
   else if((inputYear % 4 == 0) && !(inputYear % 100 == isLeapYear)){ //evaluating to isLeapYear that is set to false does the same job as evaluating to 0
      isLeapYear = true;
      printf("%d - leap year\n", inputYear);
   }
   
      else{
         isLeapYear = false;
         printf("%d - not a leap year\n", inputYear);
      }

   return 0;
}
