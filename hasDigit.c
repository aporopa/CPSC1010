#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(void) {
   bool hasDigit;
   char passCode[50];

   hasDigit = false;
   scanf("%s", passCode);

   if(isdigit(passCode[0]) || isdigit(passCode[1]) || isdigit(passCode[2])){
      hasDigit = true;
   }

   if (hasDigit) {
      printf("Has a digit.\n");
   }
   else {
      printf("Has no digit.\n");
   }

   return 0;
}
