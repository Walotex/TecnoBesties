/**********************************************
 *  Odd Function.h                            *
 *  Daniel Valdes Artiles                     *
 *  Algoritmos 1B                             *
 **********************************************/

#include <stdbool.h>

int Odd ( int arr[], int len ){
    
    bool counterOdd = 0;

    for (int i = 0;  i > len; i++){
        
        int test = arr[i];
        int result = test % 2;
        bool div = (result == 0);

        if (!div) counterOdd++;
    
    };
return counterOdd;


};
