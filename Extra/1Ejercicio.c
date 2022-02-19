#include <stdio.h>
#include <math.h>

int main(){
    //Variables and giving them a value
    float farenheit, celsius;

    printf("Inserte los grados Celsius: ");
    scanf(" %f", &celsius);

    //The process
    farenheit = (celsius * 1.8 + 32);
    
    printf("Hoy tendremos un clima de: %.2f grados Fahrenheit. \n", farenheit);

    //Giving the tip
    if(farenheit > 80){
        printf("El deporte adecuado para este dia es: Natacion.");
    }
    else if(farenheit > 40 && farenheit <= 80){
        printf("El deporte recomendado hoy es: Futbol");
    }
    else{
        printf("Hoy es un buen dia para practicar Esqui.");
    }

    return 0;
}