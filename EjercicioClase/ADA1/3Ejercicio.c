/* Los reactivos a y b explotan al mezclarse, los b y c generan escarcha, los a y c generan calor, el reactivo d con cualquiera que se 
le mezcle excepto c genera espuma y con c explotan. El usuario debe ingresar dos reactivos y el sistema debe mostrar la reacción que les corresponde */

#include <stdio.h>

int main(){

    char Rx_1, Rx_2;

    printf("\nSeleccione entre los reactivos a, b, c y d.");
    printf("\nCombine dos reactivos: ");
    scanf("%c %c", &Rx_1, &Rx_2);

    if((Rx_1 == 'a' && Rx_2 == 'b') || (Rx_1 == 'b' && Rx_2 == 'a')){
        printf("CUIDADO!, la reaccion de a y b es explosiva.");
    }
    else if((Rx_1 == 'b' && Rx_2 == 'c') || (Rx_1 == 'c' && Rx_2 == 'b')){
        printf("Con b y c usted producira escarcha. PELIGRO!! de explosion.");
    }
    else if((Rx_1 == 'a' && Rx_2 == 'c') || (Rx_1 == 'c' && Rx_2 == 'a')){
        printf("Con esta reaccion entre a y c se produce calor. PELIGRO!! de explosion.");
    }
    else if (((Rx_1 == 'a' && Rx_2 == 'd') || (Rx_1 == 'd' && Rx_2 == 'a')) || ((Rx_1 == 'b' && Rx_2 == 'd') || (Rx_1 == 'd' && Rx_2 == 'b'))){
        printf("Esta reaccion entre a y d o b y d genera espuma.");
    }

    return 0;
}