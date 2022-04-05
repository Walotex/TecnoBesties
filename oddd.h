#include <stdbool.h>

int Odd ( int arr[], int len ){
    
 int count = 0;

    for (int i = 0;  i < len; i++){

        int test = arr[i];
        int result = test % 2;
        bool div = (result == 0);

        if (!div) count++;
    
    }
return count;