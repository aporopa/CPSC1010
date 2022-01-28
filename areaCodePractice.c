#include <stdio.h>

int main(void) {

   int tmpVal;
   int tmpVal2;
   int tmpVal3;
   int middleCode;
   int endCode;  
   int phoneNum = 1034150195; //number has to be one 
   int areaCode;

   tmpVal = phoneNum / 10000;
   tmpVal2 = phoneNum / 10000000;
   tmpVal3 = phoneNum / 10000; 
   areaCode = tmpVal % 1000;
   middleCode = tmpVal2 % 1000;
   endCode = tmpVal3 % 1000; 


   printf("The area code is %d.\n", areaCode);
   printf("The phone number is %d-%d-%d", areaCode, middleCode, endCode);



   return 0;
}