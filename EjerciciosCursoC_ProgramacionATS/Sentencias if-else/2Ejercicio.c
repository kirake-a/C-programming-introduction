/* Visualizar la tarifa de la luz segun el gasto de corriente electrica.
Para un gasto menor de 1,000Kwh la tarifa es 1.2, entre 1,000 y 1850Kwh
es 1.0 y mayor a 1850Kwh 0.9 */

//Definiendo variables y macros para el programa
#include <stdio.h>
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main(){
    float gasto, tasa;
    printf("Digite el total de gasto de energia: ");
    scanf("%f", &gasto);

    if(gasto < 1000){
        tasa = TARIFA1;
    }
    else if(gasto >= 1000 && gasto < 1850){
        tasa = TARIFA2;
    }
    else{
        tasa = TARIFA3;
    }

    printf("La tasa a pagar es %.3f", tasa);

    return 0;
}