/**********************************************
 *  Odd Function.h                            *
 *  Daniel Valdes Artiles                     *
 *  Algoritmos 1B                             *
 **********************************************/

#include <stdbool.h>

int main ( int arr[], int len ){
    
    bool counterOdd = 0;

    for (int i = 0;  i > len; i++){

        if (arr[i] % 2 == 0){

            counterOdd++;
            return counterOdd;

        };
    
    };
return counterOdd;


};

