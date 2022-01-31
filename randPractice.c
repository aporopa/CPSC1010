#include <stdio.h>
#include <stdlib.h> //needed to include rand_max
#include <math.h>
#include <time.h>

int main(void){


srand((int)time(0));

printf("%d\n", rand());
printf("%d\n", rand());
printf("%d\n", rand());

printf("RAND_MAX: %d\n", RAND_MAX);

    return 0;
}