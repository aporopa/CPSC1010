#include <stdio.h>

int main(void){

    int userInput = 0;
    

    printf("Enter an integer from 11 - 100 (inclusive): \n");
    scanf(" %d", &userInput);

    while(userInput > 100 || userInput < 11){
        printf("Invalid: please enter an integer between 11 - 100 (inclusive): \n");
        scanf("%d", &userInput);
    }
    
    while(!(userInput % 11 == 0)){
          printf("%d ", userInput);
          userInput = userInput - 1;
    }
    
    printf("%d \n", userInput);

    return 0;
}
