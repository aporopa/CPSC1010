//feb 28th 2022

#include <stdio.h>

int main(void){

    int size = 0;
    int array[size];
    int threshold;
    int count = 0;
    
    //get data from user
    printf("How many integers to enter?\n");
    scanf("%d", &size);

    printf("Please enter %d integers: ", size);
    for(int i = 0; i < size; ++i){
        scanf("%d", &array[i]);
    }

    printf("Enter threshold: \n");
    scanf("%d", &threshold);

    //get data for threshold
    for(int i = 0; i < size; ++i){
        if(array[i] <= threshold){ //checking one integer in the array at a time
            if(count == 0) {
            printf("%d", array[i]);
            ++count; 
            }
            else{
                printf(", %d", array[i]);
            }
        } 
    }

printf("\n");

    return 0;
}
