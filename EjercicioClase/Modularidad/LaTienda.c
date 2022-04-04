/* Una tienda tiene una promocion que desea aplicar a los primeros 5 clientes que realicen la compra en este
dia. Los trajes con un precio superior a los $2,500 se les aplicara un descuento del 15%, a todos los demas
se les aplicara solo el 8% */
#include <stdio.h>

float descuento15(float cost);
float newPrice15(); // Not added yet
float descuento8(float cost);
float newPrice8(); // Not added yet

int main(){
    float cost;
    int counter = 0, option, discount;

    do{
        printf("\n\nIngrese un costo negativo si desea finalizar el programa");
        printf("\nIngresar el precio del producto: ");
        scanf("%f", &cost);

        /* Evaluating if the cost of the product will have a discount of 8% or 15%, considering
        that if there are more than 5 clients who bought more than $2500 they'll pay -8% */
        if (cost >= 2500)
        {
            counter += 1;

            if (counter <= 5)
            {
                discount = descuento15(cost);
                cost -= discount;
            }
            else if (counter > 5)
            {
                discount = descuento8(cost);
                cost -= discount;
            }
        }
        else if (cost > 0 && cost < 2500)
        {
            discount = descuento8(cost);
            cost -= discount;
        }

    } while (cost > 0);

    return 0;
}

// Defining the 15% discount for the VIP clients...
float descuento15(float cost){
    float percentage;

    percentage = cost * 0.15;

    return percentage;
}

// Defining the 8% discount for the rest of the clients...
float descuento8(float cost){
    float percentage;

    percentage = cost * 0.08;

    return percentage;
}