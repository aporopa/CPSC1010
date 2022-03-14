#include <stdio.h>

double CalcAverage(int array[], int size);

int main(void){

    int size;
    double returnFunc;

    scanf("%d", &size);
    int array[size];

    for(int i = 0; i < size; ++i){
        scanf("%d", &array[i]);
    }

    returnFunc = CalcAverage(array, size);
    printf("The average is: %.1f\n", returnFunc);

    return 0;
}

double CalcAverage(int array[], int size){
    double sum;
    double output;

    for(int i = 0; i < size; ++i){
        sum = sum + array[i];
    }

    output = sum / size;

    return(output);

}
