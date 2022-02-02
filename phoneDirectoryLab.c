/* Abigail Poropatich
   Section 2
   February 1, 2022
*/

#include <stdio.h>
#include <math.h>

int main(void){

//Variables for all the countries 
    int firstThree = 0;
    int middleThree = 0;
    int lastFour = 0;
    int croatiaCode = 385;
    int brazilCode = 55;
    int unitedStatesCode = 1;
    int egyptCode = 20;
    int franceCode = 33;
    char plusSign = '+';
    char croatiaChar[] = "Croatia";
    char egyptChar[] = "Egypt";
    char franceChar[] = "France";
    char brazilChar[] = "Brazil";
    char unitedStates[] = "U.S."; //in my person IDE this will only initialize when i put a space between the brackets and do not seperate it from the variable??

//scan statements for the phone number variables
    scanf("%d", &firstThree);
    scanf("%d", &middleThree); //these variables are not lighting up in VSCode, but they are working just fine
    scanf("%d", &lastFour);

//Hard coded header
    printf("Country  Phone Number\n");
    printf("-------  --------------------\n");

//Print statements for phone numbers with mathmatical edits and country codes
    printf("%7s%3c%5d (%d)%d-%d\n", unitedStates, plusSign, unitedStatesCode, firstThree, middleThree, lastFour); //ask if you can hardcode the white space near the phone number parenthesis
    printf("%7s%3c%5d (%d)%d-%d\n", brazilChar, plusSign, brazilCode, firstThree, middleThree + 100, lastFour);
    printf("%7s%3c%5d (%d)%d-%d\n", croatiaChar, plusSign, croatiaCode, firstThree, middleThree, lastFour + 50);
    printf("%7s%3c%5d (%d)%d-%d\n", egyptChar, plusSign, egyptCode, firstThree + 30, middleThree, lastFour);
    printf("%7s%3c%5d (%d)%d-%d\n", franceChar, plusSign, franceCode, middleThree, firstThree, lastFour);





    return 0;
}