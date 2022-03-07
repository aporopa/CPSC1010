#include <stdio.h>
#include <string.h>

int main(void){

    char inputString[50];

    printf("Please enter a line of text (maximum 50 characters). Type done, Done, or d to exit program. \n");
    fgets(inputString, 50, stdin); //using fgets because the user input might have spaces in it

 //necessary to make sure fgets does not read in and print the newline but instead adds a null
    if (inputString[strlen(inputString) - 1] == '\n') {
        inputString[strlen(inputString) - 1] = '\0';
   }

 //while the input does not equal the exit keys
    while(!(strcmp(inputString, "done") == 0 || strcmp(inputString, "Done") == 0 || strcmp(inputString, "d") == 0)){
        for (int i = strlen(inputString) - 1; i >= 0; i--){ //reverse the string
            printf("%c", inputString[i]); //print each char backward in order to include spaces
        }

        printf("\n");
        printf("Please enter another line of text (maximum 50 characters). Type done, Done, or d to exit program.\n");
        
        scanf("%s", inputString); //ask for more input

    }

    return 0;
}
