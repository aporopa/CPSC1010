#include <stdio.h>

int CountEvens(int num1, int num2, int num3, int num4);

int main(void) {

   int num1, num2, num3, num4;
   scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
   printf("Total evens: %d\n", CountEvens(num1, num2, num3, num4));

   return 0;
}

int CountEvens(int num1, int num2, int num3, int num4){
   int count = 0;
   
   if (num1 % 2 == 0)
      ++count;
   if (num2 % 2 == 0)
      ++count;
   if (num3 % 2 == 0)
      ++count;
   if (num4 % 2 == 0)
      ++count;
      
   return(count);
}
