#include <stdio.h>

int main(void){

    int userInput = 0;
    int count = 0;


    printf("Enter a positive integer: \n");
    scanf("%d", &userInput);

    while (userInput < 1){ //condition for if the input is able to be a hailstone sequence
        printf("Invalid - please enter a positive integer: \n");
        scanf("%d", &userInput);
    }

    while(userInput > 1){
       printf("%d\t", userInput);
        if(userInput % 2 == 0){ //determines if it is an even number
            userInput = userInput / 2;
        }
        else{
            userInput = (userInput * 3) + 1; 
        }
        count++; //determines how many times the program has run through the loop

        if(count % 5 == 0){ //if the loop has run through 5 times, start a new line
            printf("\n");
        }
    }

   printf("%d\n", userInput);
    return 0;
}