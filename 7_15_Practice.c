#include <stdio.h>

int main(void) {

   int userInput = 0;
   int greatestValue = 0;
   
   scanf("%d", &userInput);
   while(userInput > 0){
      if(userInput >= greatestValue){
      greatestValue = userInput;
      }
      scanf("%d", &userInput);
   }
   
   printf("%d", greatestValue);

   return 0;
} 