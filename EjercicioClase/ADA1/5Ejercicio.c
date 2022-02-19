/* Una companía efectúa calculos para su reparto de utilidades. En esta ocasion añadira un pequeno incentivo de acuerdo a la antigüedad de sus
empleados. Se sabe que la companía lleva 15 años trabajando y el incentivo se dará de acuerdo al número de años laborados segun la información 
siguiente: escribe un programa que lea el sueldo del empleado y su antigüedad y que calcule su incentivo, imprimiendo su sueldo base, el 
incentivo y el sueldo a pagar. Suponer que no se conoce el numero de empleados.  */

#include <stdio.h>

int main(){

    //Defining the variables
    float year_work, salary; //The main variables
    float  years_company, tip_p, extra_tip, new_salary; //Auxiliry variables
    years_company = 15;

    //The process, with do-while, it ends when the user enters a 0
    do{

        //Giving a value for the main variables
        printf("\nDigite 0 si desea terminar el programa.");
        printf("\nDigite la cantidad de años que ha laborado en la empresa: ");
        scanf("%f", &year_work);
        printf("\nDigite su sueldo para evaluar su caso: ");
        scanf("%f", &salary);

        //Using an if sentence to know the new salary, it being printed the extra tip and the new salary
        if(year_work > 0 && year_work < 4){
            tip_p = 0.01;
            extra_tip = salary * tip_p;
            new_salary = salary + extra_tip;

            printf("\nSu ingreso extras sera de: %.3f", extra_tip);
            printf("\nSu salario ahora es de: $%.3f", new_salary);
        }
        else if(year_work >= 4 && year_work < 7){
            tip_p = 0.03;
            extra_tip = salary * tip_p;
            new_salary = salary + extra_tip;

            printf("\nSu ingreso extra sera de: $%.3f", extra_tip);
            printf("\nSu salario ahora es de: $%.3f", new_salary);
        }
        else if(year_work >= 7 && year_work < 10){
            tip_p = 0.05;
            extra_tip = salary * tip_p;
            new_salary = salary + extra_tip;

            printf("\nSu ingreso extra sera de: $%.3f", extra_tip);
            printf("\nSu salario ahora es de: $%.3f", new_salary);
        }
        else if(year_work >= 10 && year_work <= years_company){
            tip_p = 0.07;
            extra_tip = salary * tip_p;
            new_salary = salary + extra_tip;

            printf("\nSu ingreso extra sera de: $%.3f", extra_tip);
            printf("\nSu salario ahora es de: $%.3f", new_salary);
        }

    } while (year_work != 0 || salary != 0);

    return 0;
}