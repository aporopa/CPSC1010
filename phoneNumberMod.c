#include <stdio.h>

int main(void) {
   long long phoneNumber;
   int lastFour;
   int tempVal1;
   int middleThree;
   int tempVal2;
   int firstThree;
   
   
   scanf("%lld",  &phoneNumber);
   
   //Math for the first three digits
   tempVal1 = phoneNumber / 10000000; //isolating the beginning digits knowing that the computer will ignore the decimals
   firstThree = tempVal1 % 1000; //divide so that the 800 would be in the decimal place
   
   //middle phone number digits math
   tempVal2 = phoneNumber / 10000; //shifting over the numbers so that the digits i want are on the end and i can perform the mod division
   middleThree = tempVal2 % 1000;
   
   //Last four digits of the phone number
   lastFour = phoneNumber % 10000; // four zeros are necessary
   
   printf("(%d) ", firstThree);
   printf("%d-%d\n", middleThree, lastFour);

   return 0;
}
