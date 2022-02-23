#include <stdio.h>
#include <math.h>

int amstrong3Digits(int value, int thePower);
int amstrong2Digits(int value, int thePower);
int amstrong1Digit(int value, int thePower);
int theSum(int hundreds, int tens, int units);

int main(){

    int num, power_number, amstrongV = 0;

    printf("Inserte un numero no mayor a tres cifras: ");
    scanf("%i", &num);

    if(num >= 100 && num < 1000){
        power_number = 3;

        amstrongV = amstrong3Digits(num, power_number);

        if(amstrongV == 1){
            printf("El valor evaluado es perteneciente al conjunto de Amstrong.");
        }
        else if(amstrongV == 0){
            printf("El valor evaluado NO pertence al conjunto de Amstrong.");
        }
    }
    else if(num >= 10 && num < 100){
        power_number = 2;

        amstrongV = amstrong2Digits(num, power_number);

        if(amstrongV == 1){
            printf("El valor evaluado es perteneciente al conjunto de Amstrong.");
        }
        else if(amstrongV == 0){
            printf("El valor evaluado NO pertenece al conjunto de Amstrong.");
        }
    }
    else if(num >= 0 && num < 10){
        power_number = 1;

        amstrongV = amstrong1Digit(num, power_number);

        if(amstrongV == 1){
            printf("El valor evaluado es perteneciente al conjunto de Amstrong.");
        }
        else if(amstrongV == 0){
            printf("El valor evaluado NO pertenece al conjunto de Amstrong.");
        }
    }
    else{
        printf("Error, valor no soportado");
    }

    return 0;
}

int amstrong3Digits(int value, int thePower){
    int hundreds, tens, modtens, units, sum1 = 0, sum2, truth_value;

    //Calculating hundreds
    hundreds = value / 100;

    //Calculating tens
    modtens = value % 100;
    tens = modtens / 10;

    //Calculating units
    units = modtens % 10;

    sum1 = pow(hundreds, thePower) + pow(tens, thePower) + pow(units, thePower);
    sum2 = theSum(hundreds, tens, units);

    if(sum1 == sum2){
        truth_value = 1;
    }
    else{
        truth_value = 0;
    }

    return truth_value;
}

int amstrong2Digits(int value, int thePower){
    int hundreds, tens, units, sum1, sum2, truth_value;

    //Now we have a number with 2 digits, so there is no hundreds
    hundreds = 0;

    //Calculating tens
    tens = value / 10;

    //And calculating units
    units = value % 10;

    sum1 = pow(hundreds, thePower) + pow(tens, thePower) + pow(units, thePower);
    sum2 = theSum(hundreds, tens, units);

    if(sum1 == sum2){
        truth_value = 1;
    }
    else{
        truth_value = 0;
    }

    return truth_value;
}

int amstrong1Digit(int value, int thePower){
    int hundreds, tens, units, sum1, sum2, truth_value;

    //Now in the units function there is none hundreds or tens, so they're 0
    hundreds = 0;
    tens = 0;

    units = value;

    sum1 = pow(hundreds, thePower) + pow(tens, thePower) + pow(units, thePower);
    sum2 = theSum(hundreds, tens, units);

    if(sum1 == sum2){
        truth_value = 1;
    }
    else{
        truth_value = 0;
    }

    return truth_value;
}

int theSum(int hundreds, int tens, int units){
    int result;

    result = (hundreds * 100) + (tens * 10) + units;

    return result;
}