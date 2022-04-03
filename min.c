# include <stdio.h>
# include "min.h"

int arr[3] = {3,1,10}

int main(){
    int indexMin = min(arr,3);
    printf(" indexMin %d, value: %d",indexMin, arr[indexMin]);
    return 0;
}