#include <stdio.h>
#include <string.h>

int main(void){

    int integerInput;
    char inputChar;
    
 //asking for how many words to enter from user
    printf("How many words to enter: \n");
    scanf("%d", &integerInput);

    printf("Please enter %d words: \n", integerInput);

//declare the 2D array 
    char array[integerInput][20];

//get string array from user that is predefined by integerInput
    for (int i = 0; i < integerInput; ++i){
        scanf("%s", array[i]);
    }

    printf("Enter a character to search: \n");
    scanf(" %c", &inputChar); //make sure to include a space or it will search for the newline

    printf("Character match found: ");

 //using strchr look for the user input char and if it does not come back NULL then print the words that strchr found the character in
    for(int i = 0; i < integerInput; ++i){
        if(strchr(array[i], inputChar) != NULL){
           printf("%s ", array[i]);
        }
    }
   
   printf("\n");
   
    return 0;
}