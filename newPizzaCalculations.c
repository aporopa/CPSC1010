#include <stdio.h>
#include <math.h>

int main(void) {
    
   int peopleAttending = 0;
   double pizzaNeeded = 0;
   double costForPizza = 0;
   
   scanf("%d", &peopleAttending);
 
 //ceiling function should not be on the calculated variable but rather the math
   pizzaNeeded = ceil((((double)peopleAttending * 2)/12)); //must project everything as a double to achieve the correct number for the ceiling function
   costForPizza = pizzaNeeded * 14.95;
   
   printf("Pizzas: %.0f\n", pizzaNeeded);
   printf("Cost: $%0.2lf\n", costForPizza);
   
    return 0;

}
