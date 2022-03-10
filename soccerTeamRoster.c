/* Abigail Poropatich
CPSC 1011-02
*/

#include <stdio.h>
#include <string.h>

int main(void){

    //variables 
    int playersToEnter;
    int updatedRating;
    int updateJerNumber;
    int updatedPlayerJer;
    int replaceJerseyNumber;
    int compPlayerRating;
    char keyStroke;

    //ask your user for input
    printf("How many players to enter: \n");
    scanf("%d", &playersToEnter);
    
    //declare arrays after scanning in the size
    int jerseyNumber[playersToEnter];
    int playerRating[playersToEnter];

    //for loop to fill in array with corresponding jersey/player number
    for(int i = 0; i < playersToEnter; ++i) {
        printf("Enter player %d's jersey number:\n", i + 1);
        scanf("%d", &jerseyNumber[i]);
            if(jerseyNumber[i] > 99 || jerseyNumber[i] < 1){ //restriction on jersey number
                printf("Please enter a jersey number in range.\n");
                scanf("%d", jerseyNumber[i]);
            }
        printf("Enter player %d's rating:\n", i + 1);
        scanf("%d", &playerRating[i]);
        if(playerRating[i] > 10 || playerRating[i] < 1){ //restriction on player rating
                printf("Please enter a player rating in range.\n");
                scanf("%d", playerRating[i]);
            }
        printf("\n");

    }
    do{ //do while the input is not the 'q' key
        printf("MENU\n");
        printf("p - Print roster\n");
        printf("u - Update player rating\n");
        printf("a - Print players above a rating\n");
        printf("r - Replace player\n");
        printf("q - Quit\n");

        //ask user to pick a menu option
        printf("Choose an option:\n");
        scanf(" %c", &keyStroke);

        //if the user input is equal to 'p' then print the roster
        if(keyStroke == 'p'){
            printf("PLAYER ROSTER\n----------------------------\n");
            printf("|  Player|  Jersey|  Rating|\n");
                for(int i = 0; i < playersToEnter; ++i){ //for loop to output the player roster with correct spacing
                    printf("|%8d|", i + 1);
                    printf("%8d|", jerseyNumber[i]);
                    printf("%8d|\n", playerRating[i]);
                }
            printf("----------------------------\n");
            
        }
        //if the user input is equal to 'u' then update a player rating
        else if(keyStroke == 'u'){
            int count = 0;
            printf("Enter a jersey number:\n");
            scanf("%d", &updateJerNumber);
            for(int i = 0; i < playersToEnter; ++i){ //for loop to find a match between the array already stored and the user input
                if(updateJerNumber == jerseyNumber[i]){ //if the loop find a match, the proceed with updating
                    printf("Enter a new rating for player:\n");
                    scanf("%d", &updatedRating);
                    playerRating[i] = updatedRating;
                    ++count; //if the branch is executed, count
                }
            }
            if(count == 0){ //if the branch was never executed then there was no player that matched the input
                printf("Player not in roster.\n");
            }
        }
        //if the user input is equal to 'a' then print player ratings above a certain number
        else if(keyStroke == 'a'){
            printf("Enter a rating:\n");
            scanf("%d", &compPlayerRating);
            printf("PLAYER RATING ABOVE %d\n----------------------------\n", compPlayerRating);
            printf("|  Player|  Jersey|  Rating|\n");
            for(int i = 0; i < playersToEnter; ++i){ //loop through to find player ratings higher than the user input
                if(playerRating[i] > compPlayerRating){
                    printf("|%8d|", i + 1);
                    printf("%8d|", jerseyNumber[i]);
                    printf("%8d|\n", playerRating[i]);
                }
            }
            printf("----------------------------\n");
        }
        //if the user input is equal to 'r' then replace a player
        else if(keyStroke == 'r'){
            int count = 0;
            printf("Enter a jersey number:\n");
            scanf("%d", &replaceJerseyNumber);
            for(int i = 0; i < playersToEnter; ++i){ //for loop to find value in array that matches user input 
                if(replaceJerseyNumber == jerseyNumber[i]){
                    count++;
                    printf("Enter a new jersey number:\n"); //if the branch is entered, then proceed with editing the p;a
                    scanf("%d", &updatedPlayerJer);
                        jerseyNumber[i] = updatedPlayerJer; //replace the identified jersey spot in the array with user input
                    printf("Enter a rating for the new player:\n");
                    scanf("%d", &playerRating[i]);
                }
            }
            if(count == 0){ //if the branch was never entered, then there was no match from the original array and the player does not exist
                printf("Player not in roster.\n");
            }
        }

    } while (keyStroke != 'q'); //exit 

    return 0;
}
