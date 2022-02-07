#include <stdio.h>

int main(void) {

   int colorVal1 = 0;
   int colorVal2 = 0;
   int colorVal3 = 0;
   int greyColor = 0;
   
   scanf("%d %d %d", &colorVal1, &colorVal2, &colorVal3);
   
   if(colorVal1 < colorVal2 && colorVal1 < colorVal3) {
      greyColor = colorVal1;
   }
      else if(colorVal2 < colorVal1 && colorVal2 < colorVal3){
         greyColor = colorVal2;
      }
      
      else if(colorVal3 < colorVal2 && colorVal3 < colorVal1){
         greyColor = colorVal3;
      }
      
      else{
         greyColor = colorVal1;
      }
      
   printf("%d %d %d\n", colorVal1 - greyColor, colorVal2 - greyColor, colorVal3 - greyColor);
    

   return 0;
}
