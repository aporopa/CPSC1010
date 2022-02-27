#include <stdio.h>

int main(void) {
   const int NUM_VALS = 4;
   int courseGrades[NUM_VALS];
   int i;

   for (i = 0; i < NUM_VALS; ++i) {
      scanf("%d", &(courseGrades[i]));
   }

  for (i = 0; i < NUM_VALS; ++i){
     printf("%d ", courseGrades[i]);
  }
     printf("\n");
   
  for (i = NUM_VALS; i > 0; --i){
     printf("%d ", courseGrades[i-1]); //why did this not subtract the value from the number in the array
  }
     printf("\n");

   return 0;
}


//different program

#include <stdio.h>
int main(void) {
   const int NUM_ELEMENTS = 3;
   int userVals[NUM_ELEMENTS];
   int i;
   
   userVals[0] = 2;
   userVals[1] = 5;
   userVals[2] = 7;
   
   for (i = NUM_ELEMENTS - 1; i >= 0; --i) { //whats the difference between this and editing the array within the bracket statement
   //adding the equal sign to the second statement in the loop allows for printing the entire array instead of the first two elements
      printf("%d\n", userVals[i]);
   }
   
   return 0;
}

//different program
#include <stdio.h>

int main(void) {
   const int NUM_VALS = 4;
   int userValues[NUM_VALS];
   int i;
   int matchValue;
   int numMatches = -99; // Assign numMatches with 0 before your for loop

   scanf("%d", &matchValue);

   for (i = 0; i < NUM_VALS; ++i) {
      scanf("%d", &(userValues[i]));
   }

   for(i = 0; i < NUM_VALS; ++i){
      if(matchValue == userValues[i]){
         ++numMatches;
      }
   }
   
   numMatches = numMatches + 99; //I feel like there is a better way to do this

   printf("matchValue: %d, numMatches: %d\n", matchValue, numMatches);

   return 0;
}
