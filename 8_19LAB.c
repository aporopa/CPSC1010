#include <stdio.h>
#include <string.h>

int main() {

    int size;
    
    printf("How many words to enter: \n");
    scanf("%d", &size);
    printf("Please enter %d words: \n", size);
    
    char array[size][20];
    for (int i = 0; i < size; ++i) {
        scanf("%s", array[i]);
    }

    printf("Enter a character to search: \n");
    char character;
    scanf(" %c", &character);

    printf("Character match found: ");

    for (int i = 0; i < size; ++i) {
        if (strchr(array[i], character) != NULL) {
            printf("%s ", array[i]);

        }
    }

printf("\n");

    return 0;
}