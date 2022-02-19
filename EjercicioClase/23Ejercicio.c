/*Las matematicas se han vuelto locas */
#include <stdio.h>
#include <math.h>

int main(){
    //Declarando las variables de la funcion main
    int num1, num2, centenas = 0, moddecenas = 0, decenas = 0, unidades = 0, total_num1 = 0, total_num2 = 0, suma_Total = 0;

    printf("Inserte dos valores (De dos digitos como maximo): ");
    scanf("%d %d", &num1, &num2);

    //Sentencia para el calculo de valores de num1
    if(num1 > 100){
        //Para determinar las centenas
        centenas = num1 / 100;

        //Determinando decenas
        moddecenas = num1 % 100;
        decenas = moddecenas / 10;

        //Calculando unidades
        unidades = moddecenas % 10;

        //Proceso. Calculo de los nuevos valores para num1
        if(centenas >= 0 && centenas <= 8){
            centenas += 1;
            centenas = centenas * 100;
        }
        else if(centenas = 9){
            centenas = 0;
        }

        if(decenas >= 0 && decenas <= 8){
            decenas += 1;
            decenas = decenas * 10;
        }
        else if(decenas = 9){
            decenas = 0;
        }

        if(unidades >= 0 && unidades <= 8){
            unidades += 1;
        }
        else if(unidades = 9){
            unidades = 0;
        }

        //Output 1. Sumatoria de los nuevos valores para el retorno del nuevo num1. Proceso con centenas.
        total_num1 = centenas + decenas + unidades;
    }
    else if(num1 >= 10 && num1 <= 99){
        centenas = 0;
        decenas = num1 / 10;
        unidades = num1 % 10;

        //Proceso. Calculo de los nuevos valores para num1.
        if (decenas >= 0 && decenas <= 8)
        {
            decenas += 1;
            decenas = decenas * 10;
        }
        else if (decenas = 9)
        {
            decenas = 0;
        }

        if (unidades >= 0 && unidades <= 8)
        {
            unidades += 1;
        }
        else if (unidades = 9)
        {
            unidades = 0;
        }

        // Output 1.1. Sumatoria de los nuevos valores para el retorno del nuevo num1. proceso con decenas.
        total_num1 = decenas + unidades;
    }

    //Sentencia para el calculo de valores de num2
    if (num2 > 100)
    {
        // Para determinar las centenas
        centenas = num2 / 100;

        // Determinando decenas
        moddecenas = num2 % 100;
        decenas = moddecenas / 10;

        // Calculando unidades
        unidades = moddecenas % 10;

        //Proceso. calculo de los nuevos valores para num2
        if (centenas >= 0 && centenas <= 8)
        {
            centenas += 1;
            centenas = centenas * 100;
        }
        else if (centenas = 9)
        {
            centenas = 0;
        }

        if (decenas >= 0 && decenas <= 8)
        {
            decenas += 1;
            decenas = decenas * 10;
        }
        else if (decenas = 9)
        {
            decenas = 0;
        }

        if (unidades >= 0 && unidades <= 8)
        {
            unidades += 1;
        }
        else if (unidades = 9)
        {
            unidades = 0;
        }

        // Output 2. Sumatoria de los nuevos valores para el retorno del nuevo num2. Proceso con centenas.
        total_num2 = centenas + decenas + unidades;
    }
    else if (num2 >= 10 && num2 <= 99)
    {
        centenas = 0;
        decenas = num2 / 10;
        unidades = num2 % 10;

        if (decenas >= 0 && decenas <= 8)
        {
            decenas += 1;
            decenas = decenas * 10;
        }
        else if (decenas = 9)
        {
            decenas = 0;
        }

        if (unidades >= 0 && unidades <= 8)
        {
            unidades += 1;
        }
        else if (unidades = 9)
        {
            unidades = 0;
        }

        // Output 2.1. Sumatoria de los nuevos valores para el retorno del nuevo num2. Proceso con decenas.
        total_num2 = decenas + unidades;
    }

    //Proceso final. Calculo de la sumatoria de los nuevos valores de num1 + num2
    suma_Total = total_num1 + total_num2;

    //Outputs para el usuario
    printf("\nEl nuevo numero 1 es: %d", total_num1);
    printf("\nEl nuevo numero 2 es: %d", total_num2);
    printf("\nEl resultado de la suma de los dos nuevos numeros es: %d", suma_Total);

    return 0;
}