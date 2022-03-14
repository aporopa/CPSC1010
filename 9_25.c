//this shit was so hard for no reason

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//function prototype: declaring it here so it can be used in main
void RemoveNonAlpha(char userString[], char userStringAlphaOnly[]);

int main(void){

    char userString[50];
    char userStringAlphaOnly[50];

    //call for the user input
    fgets(userString, 50, stdin);

    //call the function and print
    RemoveNonAlpha(userString, userStringAlphaOnly);
    printf("%s\n", userStringAlphaOnly);

    return 0;
}

void RemoveNonAlpha(char userString[], char userStringAlphaOnly[]){
    int j = 0;
    int i;
    for(i = 0; i < strlen(userString); ++i){
        if(isalpha(userString[i])){
            userStringAlphaOnly[j] = userString[i]; //need to increment them at different speeds so you dont copy random data into the spaces where there were alpha characters
                j++; //iterate j once an alpha character is found so random data is not sitting in the non-alpha spaces
        }
    }
    userStringAlphaOnly[j] = '\0'; //need a null to end the string appended on the end manually since everything has been shifted
}

