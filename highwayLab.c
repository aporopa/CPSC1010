/* Abigail Poropatich
CPSC 1011 Highway Interstate Lab
Collaborated with: Nick Silva, Arun Chandler, Jonathan Green
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void){


    int highwayNumber = 0;
    int highwayServing = 0;
    char highwayPrimary[] = "primary";
    char highwayAuxiliary[] = "auxiliary";
    char highwayNorth[] = "north";
    char highwaySouth[] = "south";
    char highwayEast[] = "east";
    char highwayWest[] = "west";

    printf("Enter a highway number: \n");
    scanf("%d", &highwayNumber);

    if((highwayNumber <= 0) || (highwayNumber > 999) || (highwayNumber % 100 == 0)){ //identifying whether or not the program should continue running based on the restrictions on input
        printf("%d is not a valid interstate highway number.\n", highwayNumber);

        return 0;
    }

    if((highwayNumber >=1) && (highwayNumber <= 99)){ //entering the primary branch
        if(highwayNumber % 2 != 0){ //Checking if it is an odd number
            printf("I-%d is %s, going %s/%s.\n", highwayNumber, highwayPrimary, highwayNorth, highwaySouth);
        }
        else if(highwayNumber % 2 == 0){ //checking if it is an even number
            printf("I-%d is %s, going %s/%s.\n", highwayNumber, highwayPrimary, highwayEast, highwayWest);
        }

    }

    else if((highwayNumber >=100) && (highwayNumber <= 999)){ //entering the auxillary branch
        if(highwayNumber % 2 != 0){ //Checking if it is an odd number
            highwayServing = highwayNumber % 100;
            printf("I-%d is %s, serving I-%d, going %s/%s.\n", highwayNumber, highwayAuxiliary, highwayServing, highwayNorth, highwaySouth);
        }
        else if(highwayNumber % 2 == 0){ //checking if it is an even number
            highwayServing = highwayNumber % 100;
            printf("I-%d is %s, serving I-%d, going %s/%s.\n", highwayNumber, highwayAuxiliary, highwayServing, highwayEast, highwayWest);
        }

    }

    return 0;
}
