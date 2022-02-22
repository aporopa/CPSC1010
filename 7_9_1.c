#include <stdio.h>

int main(void) {
   int userNum;
   int i;
   int j;

   scanf("%d", &userNum);

   for(i = 0; i <= userNum; i++){
      for(j = 0; j < i; j++){
         printf(" ");
      }
      printf("%d\n", i);
   }

   return 0;
}
