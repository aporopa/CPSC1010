#include <stdio.h>
#include <stdlib.h>   // Enables use of rand()

int main(void) {
   int seedVal;

   scanf("%d", &seedVal);

   srand(seedVal); //randomizing the scanned in value, call for this before rand()
   printf("%d\n", (rand() % 10)); //values ranged from 0-9 so i did 9-0+1 +0 
   printf("%d\n", (rand() %10));

   return 0;
}

#include <stdio.h>
#include <stdlib.h>   // Enables use of rand()
#include <time.h>     // Enables use of time()

int main(void) {
   int seedVal;

   scanf("%d", &seedVal);
   srand(seedVal);

   printf("%d\n", (rand() % (149 - 100 + 1)) + 100); //parenthesis matter around the addition or it will only call on the first variable
   printf("%d\n", (rand() % (149 - 100 + 1)) + 100);

   return 0;
}