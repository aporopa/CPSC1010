#include <stdio.h>
#include <stdbool.h>

double CalcToll(int hour, bool isMorning, bool isWeekend) {
   double correctFee;
   
   if (isWeekend == true){
      if(isMorning == true){
         if(hour < 7){
            correctFee = 1.05;
         }
         else if(hour == 12){
            correctFee = 1.05;
         }
         else if(hour < 11 && hour >= 7){
            correctFee = 2.15;
         }
      }
      else if(isMorning == false){
         if(hour == 12){
            correctFee = 2.15;
         }
         else if(hour >= 1 && hour < 8){
            correctFee = 2.15;
         }
         else if(hour > 8 && hour < 12){
            correctFee = 1.10;
         }
      }
   }
   else if(isWeekend == false){
      if(isMorning == true){
         if(hour < 7){
            correctFee = 1.15;
         }
         else if(hour >= 7 && hour < 10){
            correctFee = 2.95;
         }
         else if(hour >= 10 && hour < 12){
            correctFee = 1.90;
         }
      }
      else if(isMorning == false){
         if(hour == 12){
            correctFee = 1.90;
         }
         else if(hour >= 1 && hour < 3){
            correctFee = 1.90;
         }
         else if(hour >= 3 && hour < 8){
            correctFee = 3.95;
         }
         else if(hour >= 8 && hour < 12){
            correctFee = 1.40;
         }
      }
   }
   return(correctFee);
}

int main(void) {
   printf("%.2lf\n", CalcToll(8, true, false));
   printf("%.2lf\n", CalcToll(1, false, false));
   printf("%.2lf\n", CalcToll(3, false, true));
   printf("%.2lf\n", CalcToll(5, true, true));

   return 0;
}
