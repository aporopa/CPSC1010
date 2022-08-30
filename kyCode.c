/* Kylee Butler
Section number
Date
Email
Lab number and purpose of this lab */


/* Celsius to Fahrenheit
    F = (C*(9/5)) + 32 
*/

/* Fahrenheit to Celsius
    C = (5/9)*(F - 32)
*/


#include <stdio.h>
#include <math.h>

int main(void){

    int tempF = 0;
    int tempC = 0;
  
    //Prompting user for the Celsius input
    printf("Please enter the temperature in degrees Celsius.\n");
    scanf("%d", &tempC);

    //Performing Celsius to Fahrenheit conversion
    tempF = ((9.0/5.0) * tempC) + 32;

    //Printing conversion results
    printf("The temperature %d degrees Celsius is %d degrees Fahrenheit.\n\n", tempC, tempF);

    //Prompting user for the Fahrenheit input
    printf("Please enter the temperature in degrees Fahrenheit.\n");
    scanf("%d", &tempF);

    //Performing Fahrenheit to Celsius conversion
    tempC = (5.0/9.0) * (tempF - 32);

    //Printing results and thanking the user
    printf("The temperature %d degrees Fahrenheit is %d degrees Celsius.\n\n", tempF, tempC);
    printf("Thank you for using the Temperature Conversion Calculator written by Kylee Butler.\n");

    return 0;

}
