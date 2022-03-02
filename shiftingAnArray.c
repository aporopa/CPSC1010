#include <stdio.h>

int main(void) {
   const int SCORES_SIZE = 4;
   int oldScores[SCORES_SIZE];
   int newScores[SCORES_SIZE];
   int i;

   for (i = 0; i < SCORES_SIZE; ++i) {
      scanf("%d", &(oldScores[i]));
   }
//assigning the last value of the new array with the first value of the old array
newScores[SCORES_SIZE - 1] = oldScores[0]; 

   for (i = 0; i < SCORES_SIZE; ++i){
      newScores[i-1] = oldScores[i]; //the minus one without the brackets
   }

   for (i = 0; i < SCORES_SIZE; ++i) {
      printf("%d ", newScores[i]);
   }
   printf("\n");

   return 0;
}
