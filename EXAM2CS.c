//Exam 2 Cheat Code

/*questions:
How do I read integers until a newline is encountered
*/

//Standard library functions
<stdio.h>
<time.h>
<stdlib.h>
<ctype.h>
<math.h>
<string.h>

//if-else branch
if(){

}
else if(){

}
else{

}

//standard for loop
for(int i = 0; i < digit; ++i){

}

//read until integer is negative
scanf("%d", &userInput);
   while(userInput > 0){
      if(userInput >= greatestValue){
      greatestValue = userInput;
      }
      scanf("%d", &userInput);
   }
   
   printf("%d", greatestValue);

//find the largest value 

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

//Reverse a 2D array
printf("How many rows: \n");
    scanf("%d", &rows);

    printf("How many columns: \n");
    scanf("%d", &columns);

    int array[rows][columns];

    for(int r = 0; r < rows; ++r){
        for(int c = 0; c < columns; ++c){
            scanf("%d", &array[r][c]);
        }
    }

    for(int r = rows - 1; r >= 0; --r){
        for(int c = columns - 1; c >= 0; --c){
            printf("%d ", array[r][c]);
        }
        printf("\n");
    }

//reverse an array
for(i = 0; i < userDigits; ++i){
        scanf("%d", &userInput[i]);
    }

    for(i = userDigits - 1; i >= 0; --i){
        printf("%d ", userInput[i]);
    }

    printf("\n");

//print string in reverse 

fgets(inputString, 50, stdin);

for (int i = strlen(inputString) - 1; i >= 0; i--){ //reverse the string
            printf("%c", inputString[i]); //print each char backward in order to include spaces
        }

//code to use whenever using fgets
if (inputString[strlen(inputString) - 1] == '\n') {
        inputString[strlen(inputString) - 1] = '\0';
   }
