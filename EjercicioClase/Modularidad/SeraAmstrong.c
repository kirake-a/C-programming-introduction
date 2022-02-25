#include <stdio.h>
#include <math.h>

//Prototiping all the functions
int amstrong3Digits(int value, int thePower);
int amstrong2Digits(int value, int thePower);
int amstrong1Digit(int value, int thePower);
int theSum(int hundreds, int tens, int units);
void theOutput(int truth_value);

int main(){

    int num, power_number, amstrongV = 0;

    printf("Inserte un numero no mayor a tres cifras: ");
    scanf("%i", &num);

    /*The are some ways to follow if the number has 3, 2 or 1 digit...
    if the number has 3 digits the power_number es equal to 3, because of the conditions of the 
    Amstrong number, so that is the same process for the next steps in the if sentence */
    if(num >= 100 && num < 1000){
        power_number = 3;

        //There is a determined function for amstrong numbers with 3 digits
        amstrongV = amstrong3Digits(num, power_number);

        /*This functions just work to give the output to the user(printing it on the screen), the output is given with the truth value that comes
        from the functions that works depending with the digits of the number given */
        theOutput(amstrongV);
    }
    else if(num >= 10 && num < 100){
        power_number = 2;

        //The same as before, there is a determine funcion for this kind of number
        amstrongV = amstrong2Digits(num, power_number);

        theOutput(amstrongV);
    }
    else if(num >= 0 && num < 10){
        power_number = 1;

        amstrongV = amstrong1Digit(num, power_number);

        theOutput(amstrongV);
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

    //Here we evaluate if the sum 1 and the sum2 are equals if they're the truth value is 1 because it means that is an Amstrong number...
    //So if it's not, the truth value is 0
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

//The sum function is to evaluate in the other functions if the number we have here and the other are equal...
int theSum(int hundreds, int tens, int units){
    int result;

    result = (hundreds * 100) + (tens * 10) + units;

    return result;
}

void theOutput(int truth_value){

    if (truth_value == 1)
    {
        printf("\nEl valor evaluado es perteneciente al conjunto de Amstrong.");
    }
    else if (truth_value == 0)
    {
        printf("\nEl valor evaluado NO pertenece al conjunto de Amstrong.");
    }
}