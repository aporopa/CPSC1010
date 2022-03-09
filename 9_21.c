#include <stdio.h>

//declare the function up here so it can be used in main
double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven);

int main(void) {

    //variables needed to use the function
    double milesPerGallon;
    double dollarsPerGallon;

    //scan in user input with prompts
    printf("Enter miles per gallon: \n");
    scanf("%lf", &milesPerGallon);
    printf("Enter price of gas (in dollars per gallon): \n");
    scanf("%lf", &dollarsPerGallon);
    printf("The cost to drive 10 miles is: $%.2lf\n", DrivingCost(milesPerGallon, dollarsPerGallon, 10)); //since the miles driven is already predetermined, simply put it in manually because it will not be a part of user input
    printf("The cost to drive 50 miles is: $%.2lf\n", DrivingCost(milesPerGallon, dollarsPerGallon, 50));
    printf("The cost to drive 400 miles is: $%.2lf\n", DrivingCost(milesPerGallon, dollarsPerGallon, 400));
   
    return 0;
}

//function for the calculated driving cost
double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven){
   
    double totalDrivingCost;

    //math for determining the cost to try
    totalDrivingCost = (dollarsPerGallon / milesPerGallon) * milesDriven; 

    //return the math
    return (totalDrivingCost);
}
