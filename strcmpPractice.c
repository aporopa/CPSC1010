#include <stdio.h>
#include <string.h>

int main(void) {
   char firstString[50];
   char secondString[50];

   scanf("%s", firstString);
   scanf("%s", secondString);

   if(strcmp(firstString, secondString) < 0){
      printf("%s %s\n", firstString, secondString);
   }
   else if(strcmp(firstString, secondString) > 0){
      printf("%s %s\n", secondString, firstString);
   }
   else if(strcmp(firstString, secondString) == 0){
      printf("%s %s\n", firstString, secondString);
   }
      

   return 0;
}
