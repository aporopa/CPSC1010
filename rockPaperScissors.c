/*
CPSC 1011-002
Abigail Poropatich
Collaborated with: Nick Silva, Arun Chandler, Jonathan Green
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

int playerOneMove;
int playerTwoMove;
int roundsToPlay = 0;
int randomNumber = 0;
int count1 = 0;
int count2 = 0;
const int rock = 0;
const int paper = 1;
const int scissor = 2;
char playerOneName[40];
char playerTwoName[40];

//print and scan statements to get information from user
printf("Enter player 1: \n");
scanf("%s", playerOneName);

printf("Enter player 2: \n");
scanf("%s", playerTwoName);

printf("How many rounds to play? \n");
scanf("%d", &roundsToPlay);
    while(roundsToPlay <= 0){ //continue asking for input until the user provides an appropriate amount of rounds
        printf("Must play at least 1 round! Please try again.\n");
        scanf("%d", &roundsToPlay);
        }

//produces pseudo-random integers based on specific user input, which means there is more of a sense of randomness
printf("Pick a number to randomize game: \n\n");
scanf("%d", &randomNumber);
srand(randomNumber);

printf("Starting game with %s versus %s for %d rounds!\n", playerOneName, playerTwoName, roundsToPlay); 

//loops through each round and evaluates it to the different combinations of rock, paper, and scissors
for(int i = 0; i < roundsToPlay; ++i){

//The resulting move of rand % 3 can only be 0,1, or 2 which gives a sense of randomization to each players moves
    playerOneMove = rand() % 3; 
    playerTwoMove = rand() % 3;

//Condition for each move with resulting winner
        if(playerOneMove == playerTwoMove){
            printf("Round %d is a TIE\n", i+1);
        }
        else if(playerOneMove == 0 && playerTwoMove == 1){
            printf("%s wins Round %d with PAPER\n", playerTwoName, i+1);
            ++count2;
        }
        else if(playerOneMove == 1 && playerTwoMove == 0){
            printf("%s wins Round %d with PAPER\n", playerOneName, i+1);
            ++count1;
        }
        else if(playerOneMove == 0 && playerTwoMove == 2){
            printf("%s wins Round %d with ROCK\n", playerOneName, i+1);
            ++count1;
        }
        else if(playerOneMove == 2 && playerTwoMove == 0){
            printf("%s wins Round %d with ROCK\n", playerTwoName, i+1);
            ++count2;
        }
        else if(playerOneMove == 1 && playerTwoMove == 2){
            printf("%s wins Round %d with SCISSORS\n", playerTwoName, i+1);
            ++count2;
        }
        else if(playerOneMove == 2 && playerTwoMove == 1){
            printf("%s wins Round %d with SCISSORS\n", playerOneName, i+1);
            ++count1;
        }

}

printf("\n");
printf("%s wins %d and %s wins %d.\n", playerOneName, count1, playerTwoName, count2);

//comparing the collected round wins versus each player
if(count1 > count2){
    printf("GAME WINNER - %s!\n", playerOneName);
}
    else if(count2 > count1){
        printf("GAME WINNER - %s!\n", playerTwoName);
    }
    else if(count2 == count1){ 
        printf("TIE!\n");
    }

return 0;
}


