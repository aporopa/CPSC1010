#include <stdio.h>

int main(void){

    int size;
    int count = 0;

    printf("How many integers to enter?\n");
    scanf("%d", &size);
   
//if you are only entering one integer, do not print the plural "integers"
   if(size == 1){
    printf("Please enter %d integer: \n", size);
   }
   
   else{
    printf("Please enter %d integers: \n", size);
   }

    int array[size]; 

//get user data
    for (int i = 0; i < size; ++i){
        scanf("%d", &array[i]);
    }

    printf("Integers in reverse: ");

//print user data backwards
    for (int i = size -1; i >= 0; --i){
         if(count == 0) {
            printf("%d", array[i]); 
            ++count; 
            }
            else{
                printf(", %d", array[i]);
            }
    }

printf("\n");



    return 0;
}
