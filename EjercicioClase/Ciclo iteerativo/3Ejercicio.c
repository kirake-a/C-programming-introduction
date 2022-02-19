
#include <stdio.h>
#include <math.h>

/*

} */

int main(){

    int i, suma, d1, d2, d3, x;

    for (int i = 100; i <= 999; i++){
        x = i;
        d1 = x % 10;
        x = x / 10;
        d2 = x % 10;
        x = x / 10;
        d3 = x;

        suma = pow(d3, 3) + pow(d2, 3) + pow(d2, 3);

        if(i == suma){
            printf("%d\n", i);
        }
    }

    return 0;
}

