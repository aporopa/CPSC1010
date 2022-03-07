#include <stdio.h>
#include <string.h>

int main(void){

    int numWords;

    printf("How many words to enter? \n");
    scanf("%d", &numWords);

    char list1[numWords][20];

    for (int r = 0; r < 10; ++r){ //you do not have to do an inner loop for a string array
        scanf("%s", list1[i]);
    }

//use strchr

    return 0;
}



#include <stdio.h>
#include <string.h>

int main(void){

    char string1[50];
    char string2[50];

    fgets(string1, 50, stdin); //the enter when ready to get more input is stored into fgets 
    scanf("%s", string2);

    if(string1[strlen(string1) - 1] == '\n'){
        string1[strlen(string1) - 1] = '\0'; //always use this statement for fgets when using input from a keyboard
    }

    printf("String 1 is -- %s \n", string1);
    printf("String 2 is -- %s \n", string2);

    if(strcmp(string1, string2) == 0){
        printf("strings are the same.\n");
    }
    else{
        printf("strings are not the same");
    }



    return 0;
}
