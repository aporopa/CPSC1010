#include <stdio.h>
#include <math.h>

int main(void){

   double carpetSquareFoot;
    int roomWidth = 0;
    int roomLength = 0;
    int roomArea = 0;
    int leftOverWaste = 0;
    double carpetCost = 0;
    double costOfLabor = 0;
    double salesTax = 0;
    double totalCost = 0;

    double carpetSquareFoot2;
    int roomWidth2 = 0;
    int roomLength2 = 0;
    int roomArea2 = 0;
    int leftOverWaste2 = 0;
    double carpetCost2 = 0;
    double costOfLabor2 = 0;
    double salesTax2 = 0;
    double totalCost2 = 0;

    double carpetSquareFoot3;
    int roomWidth3 = 0;
    int roomLength3 = 0;
    int roomArea3 = 0;
    int leftOverWaste3 = 0;
    double carpetCost3 = 0;
    double costOfLabor3 = 0;
    double salesTax3 = 0;
    double totalCost3 = 0;

    scanf("%lf %d %d", &carpetSquareFoot, &roomWidth, &roomLength);
    scanf("%lf %d %d", &carpetSquareFoot2, &roomWidth2, &roomLength2);
    scanf("%lf %d %d", &carpetSquareFoot3, &roomWidth3, &roomLength3);

    roomArea = roomLength * roomWidth;
    leftOverWaste = (((double)roomArea) * (0.20));
    carpetCost = (((double)roomArea + (double)leftOverWaste) * (carpetSquareFoot));
    costOfLabor = (0.75 * (double)(roomArea));
    salesTax = (((costOfLabor + carpetCost) * (0.07)));
    totalCost = (carpetCost + salesTax + costOfLabor);

    roomArea2 = roomLength2 * roomWidth2;
    leftOverWaste2 = (((double)roomArea2) * (0.20));
    carpetCost2 = ((roomArea2 + leftOverWaste2) * (carpetSquareFoot2));
    costOfLabor2 = (0.75 * (double)(roomArea2));
    salesTax2 = (((costOfLabor2 + carpetCost2) * (0.07)));
    totalCost2 = (carpetCost2 + salesTax2 + costOfLabor2);

    roomArea3 = roomLength3 * roomWidth3;
    leftOverWaste3 = (((double)roomArea3) * (0.20));
    carpetCost3 = ((roomArea3 + leftOverWaste3) * (carpetSquareFoot3));
    costOfLabor3 = (0.75 * (double)(roomArea3));
    salesTax3 = (((costOfLabor3 + carpetCost3) * (0.07)));
    totalCost3 = (carpetCost3 + salesTax3 + costOfLabor3);

    printf("Order #1\n");
    printf("Room: %d sq ft\n", roomArea);
    printf("Carpet: $%.2lf\n",carpetCost);
    printf("Labor: $%.2lf\n", costOfLabor);
    printf("Tax: $%.2lf\n", salesTax);
    printf("Cost: $%.2lf\n", totalCost);

    printf("\n");

    printf("Order #2\n");
    printf("Room: %d sq ft\n", roomArea2);
    printf("Carpet: $%.2lf\n",carpetCost2);
    printf("Labor: $%.2lf\n", costOfLabor2);
    printf("Tax: $%.2lf\n", salesTax2);
    printf("Cost: $%.2lf\n", totalCost2);

    printf("\n");

    printf("Order #3\n");
    printf("Room: %d sq ft\n", roomArea3);
    printf("Carpet: $%.2lf\n",carpetCost3);
    printf("Labor: $%.2lf\n", costOfLabor3);
    printf("Tax: $%.2lf\n", salesTax3);
    printf("Cost: $%.2lf\n", totalCost3);

    printf("\n");

    printf("Total Sales: %.2lf\n", (totalCost + totalCost2 + totalCost3));



    return 0;
}