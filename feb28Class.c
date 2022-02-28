#include <stdio.h>

int main(void){

    int size = 0;
    int threshold;
    int count = 0;
    
    //get data from user
    printf("How many integers to enter?\n");
    scanf("%d", &size);

    printf("Please enter %d integers: \n", size);
    
    int array[size]; //must but this after scanning in the data or else an error will ensue, what error, i do not know
    
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
