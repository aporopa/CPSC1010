#include <stdio.h>

int main(void) {

   int numVal1 = 0;
   int numVal2 = 0;
   int numVal3 = 0;
   
   scanf("%d %d %d", &numVal1, &numVal2, &numVal3);
   
   if(numVal1 < numVal2 && numVal1 < numVal3) {
      printf("%d\n", numVal1);
   }
      else if(numVal2 < numVal1 && numVal2 < numVal3){
         printf("%d\n", numVal2);
      }
      
      else if(numVal3 < numVal2 && numVal3 < numVal1){
         printf("%d\n", numVal3);
      }
      
      else{
         printf("%d\n", numVal1);
      }

   return 0;
}
