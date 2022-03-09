#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char userInput[50];
    char alteredInput[50];
    char reversedArray[50];

//ask for user input
    printf("Please enter a word or phrase (maximum 50 characters): \n");
    fgets(userInput, 50, stdin);

//code necessary when implementing fgets in order to not access random memory
    if (userInput[strlen(userInput) - 1] == '\n'){
        userInput[strlen(userInput) - 1] = '\0';
   }

//loop to alter input 
int a = 0;
    for (int i = 0; i < strlen(userInput); ++i){ 
        if (!(isspace(userInput[i]))){  //when there is not a space enter the loop and and commit userInput to alter input
            alteredInput[a] = userInput[i];

            if (isupper(alteredInput[a])){ //now that you have the alteredInput copied use the if statement to search for an isupper
                alteredInput[a] = tolower(alteredInput[a]); //if there is an upper, lower it 
            }
            a++; //increment a once this branch is reached so if there is a space, it is shifted down
         }

    }

    int j = 0;
    for (int i = strlen(alteredInput) - 1; i >= 0; --i){ //reverse the array and assign j index to i
        reversedArray[j] = alteredInput[i];
        ++j;
    }

//compare the strings in order to evaluate palindrome
    if (strcmp(reversedArray, alteredInput) == 0){
        printf("'%s' is a palindrome.\n", userInput);
    }
    else {
        printf("'%s' is not a palindrome.\n", userInput);
    }


    return 0;
}
