/*
Federal Tax Lab
Abigail Poropatich
Collaborated with: Nick Silva, Arun Chandler, Jonathan Green
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){

    int givenWages = 0;
    int taxableInterest = 0;
    int unemploymentComp = 0;
    int marriageStatus = 0;
    int taxesWithheld = 0;
    int totalAGI = 0;
    int taxOwed = 0;
    int taxableIncome = 0;
    int deduction = 0;
    double federalTax = 0;
    char AGI[] = "AGI";
    char colonChar = ':';
    char deductionChar[] = "Deduction";
    char taxIncomeChar[] = "Taxable Income";
    char federalTaxChar[] = "Federal Tax";
    char taxOwedChar[] = "Tax Owed";
    char taxRefund[] = "Tax Refund";


    scanf("%d %d %d %d %d", &givenWages, &taxableInterest, &unemploymentComp, &marriageStatus, &taxesWithheld); //Scanning in calculating variables

//equation to determine the total income with all cash flows incorporated
totalAGI = (givenWages + taxableInterest + unemploymentComp);

    if(totalAGI > 120000){ //if the total AGI is higher than the predetermined amount, there is no need to further evaluate the program
        printf("%s%-2c%d\n", AGI, colonChar, totalAGI);
        printf("Error: Income too high to use this form.\n");

        return 0;
    }
//determining marriage status and exiting program if the user input in not in accordance with 
    if(marriageStatus < 1 || marriageStatus >= 3){
        printf("Error: Must input status 1 (single) or 2 (married).\n");
        return 0;
    }
        else if(marriageStatus == 1){ //if single
             deduction = 12000;
        }
        else if(marriageStatus == 2){ //if married
             deduction = 24000;
    }

//determining how much income the government can tax based on the marriage deduction
taxableIncome = (totalAGI - deduction);
    if(taxableIncome < 0){
        taxableIncome = 0;
    }
//Starting the evaluation for federal tax
    if(marriageStatus == 1){
        if(taxableIncome <= 10000){
            federalTax = (taxableIncome * .1);
        }
        else if((taxableIncome > 10000) && (taxableIncome <= 40000)){
            federalTax = ((taxableIncome - 10000) *.12) + 1000;
        }
        else if((taxableIncome > 40000) && (taxableIncome <= 85000)){
            federalTax = ((taxableIncome - 40000) * .22) + 4600;
        }
         else if((taxableIncome > 85000)){
            federalTax = ((taxableIncome - 40000) * .24) + 14500;
        }

    }
    if(marriageStatus == 2){
        if(taxableIncome <= 20000){
            federalTax = (taxableIncome * .1);
        }
        else if((taxableIncome > 20000) && (taxableIncome <= 80000)){
            federalTax = ((taxableIncome - 20000) *.12) + 2000;
        }
        else if((taxableIncome > 80000)){
            federalTax = ((taxableIncome - 80000) * .22) + 9200;
        }

    }

//print statements with appropriate spacing
    printf("%-15s%c%7d\n", AGI, colonChar, totalAGI);
    printf("%-15s%c%7d\n", deductionChar, colonChar, deduction);
    printf("%-15s%c%7d\n", taxIncomeChar, colonChar, taxableIncome);
    printf("%-15s%c%7d\n", federalTaxChar, colonChar, (int)round(federalTax)); //because being multiplied by a decimal, value is to be round up and projected as an int

//compute taxes owed
taxOwed = round(federalTax) - taxesWithheld;
    if(taxOwed >= 0){
        printf("%-15s%c%7d\n", taxOwedChar, colonChar, taxOwed); //taxes owed because it equate to be positive
    }
    else if(taxOwed < 0){
        printf("%-15s%c%7d\n", taxRefund, colonChar, abs(taxOwed)); //absolute value needed and projected as an int because it is taxes given back when the value is less than 0
    }

    return 0; //end program
}
