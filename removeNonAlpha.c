#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    //fgets (strFilled, num, stdin)

    char string[50];

    fgets(string, 50, stdin); //knows to stop when comes across a newine //can be dynamically sized

    printf("Print the string - %s\n", string);
    
    for (int i = 0; i < strlen(string); ++i){ //can not set a numerical boundary, must be strlen
        if (isalpha(string[i])){
            printf("%c", string[i]);
        }
    }

printf("\n");

    return 0;
}
