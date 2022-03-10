/* Abigail Poropatich
CPSC 1011-02
*/

#include <stdio.h>
#include <string.h>

int main(void){

    int playersToEnter;
    int updatedRating;
    int updateJerNumber;
    int updatedPlayerJer;
    int replaceJerseyNumber;
    char keyStroke;

    printf("How many players to enter: \n");
    scanf("%d", &playersToEnter);
    
    int jerseyNumber[playersToEnter];
    int playerRating[playersToEnter];
    int compPlayerRating;

    for(int i = 0; i < playersToEnter; ++i) {
        printf("Enter player %d's jersey number:\n", i + 1);
        scanf("%d", &jerseyNumber[i]);
        printf("Enter player %d's rating:\n", i + 1);
        scanf("%d", &playerRating[i]);
        printf("\n");

    }
    do{
        printf("MENU\n");
        printf("p - Print roster\n");
        printf("u - Update player rating\n");
        printf("a - Print players above a rating\n");
        printf("r - Replace player\n");
        printf("q - Quit\n");

        printf("Choose an option:\n");
        scanf(" %c", &keyStroke);

        if(keyStroke == 'p'){
            printf("PLAYER ROSTER\n----------------------------\n");
            printf("|  Player|  Jersey|  Rating|\n");
                for(int i = 0; i < playersToEnter; ++i){
                    printf("|%8d|", i + 1);
                    printf("%8d|", jerseyNumber[i]);
                    printf("%8d|\n", playerRating[i]);
                }
            printf("----------------------------\n");
            
        }
        else if(keyStroke == 'u'){
            int count = 0;
            printf("Enter a jersey number:\n");
            scanf("%d", &updateJerNumber);
            for(int i = 0; i < playersToEnter; ++i){
                if(updateJerNumber == jerseyNumber[i]){
                    printf("Enter a new rating for player:\n");
                    scanf("%d", &updatedRating);
                    playerRating[i] = updatedRating;
                    ++count;
                }
            }
            if(count == 0){
                printf("Player not in roster.\n");
            }
        }
        else if(keyStroke == 'a'){
            printf("Enter a rating:\n");
            scanf("%d", &compPlayerRating);
            printf("PLAYER RATING ABOVE %d\n----------------------------\n", compPlayerRating);
            printf("|  Player|  Jersey|  Rating|\n");
            for(int i = 0; i < playersToEnter; ++i){
                if(playerRating[i] > compPlayerRating){
                    printf("|%8d|", i + 1);
                    printf("%8d|", jerseyNumber[i]);
                    printf("%8d|\n", playerRating[i]);
                }
            }
            printf("----------------------------\n");
        }
        else if(keyStroke == 'r'){
            int count = 0;
            printf("Enter a jersey number:\n");
            scanf("%d", &replaceJerseyNumber);
            for(int i = 0; i < playersToEnter; ++i){
                if(replaceJerseyNumber == jerseyNumber[i]){
                    count++;
                    printf("Enter a new jersey number:\n");
                    scanf("%d", &updatedPlayerJer);
                        jerseyNumber[i] = updatedPlayerJer;
                    printf("Enter a rating for the new player:\n");
                    scanf("%d", &playerRating[i]);
                }
            }
            if(count == 0){
                printf("Player not in roster.\n");
            }
        }

    } while (keyStroke != 'q');

    return 0;
}
