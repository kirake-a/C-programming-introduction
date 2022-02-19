/* Una tienda ofrece un descuento del 15% sobre el total de la compra
y un cliente desea saber cuanto debera pagar finalmente por su compra */

#include <stdio.h>

int main(){
    //The variables
    float total_compra, descuento, precioF;

    printf("Digite el total de compra: ");
    scanf("%f", &total_compra);

    //Process
    descuento = total_compra * 0.15;
    precioF = total_compra - descuento;

    //Output
    printf("Su compra con descuento incluido es de: $%.3f", precioF);

    return 0;
}