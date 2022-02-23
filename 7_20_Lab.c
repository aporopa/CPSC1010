#include <stdio.h>
#include <string.h>

int main(void){


    char inputChar;
    char inputString[50];
    int count = 0;


    printf("Enter a character: \n"); //ask for character input
    scanf("%c", &inputChar);
    printf("Enter a string: \n"); //ask for string input
    scanf("%s", inputString);

    for(int i = 0; i <= strlen(inputString); ++i){ //for loop to iterate through the array with a max at the string length
        if(inputString[i] == inputChar){ //if the i variable in the string equals the input character.. add to count
            ++count;
        }
    }

    if(count == 1){ //if the character only occurs once, do not print the plural
        printf("%d %c\n", count, inputChar);
    }
    else{
        printf("%d %c's\n", count, inputChar);
    }


    return 0;
}
