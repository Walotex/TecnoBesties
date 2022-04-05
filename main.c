#include <stdio.h>
#include "Odd.h"
#include "max.h"
#include "min.h"
#include "find.h"

int main (){
    int array[] = {5, 17, 9, 12};
    printf("Array values: {%d, %d, %d, %d}\n", array [0], array [1], array [2], array [3]);
    printf("Max values: %d\n", max(array, 4));
    printf("Min values: %d\n", min(array, 4));
    printf("Odd values: {"};
    Odd(array, 4);
    printf("}\n");

    return 0;
}