/* Una companía efectúa calculos para su reparto de utilidades. En esta ocasion añadira un pequeno incentivo de acuerdo a la antigüedad de sus
empleados. Se sabe que la companía lleva 15 años trabajando y el incentivo se dará de acuerdo al número de años laborados segun la información
siguiente: escribe un programa que lea el sueldo del empleado y su antigüedad y que calcule su incentivo, imprimiendo su sueldo base, el
incentivo y el sueldo a pagar. Suponer que no se conoce el numero de empleados.  */

#include <stdio.h>

//Prototiped of the auxiliary functions
float tip(float yearsOf_work, float years_company);
float extraTip(float yearsOf_work, float salary, float tip_p, float years_company);
float theNewSalary(float salary, float extraTip, float yearsOf_work, float years_company);
void reporte(float newSalary, float extraTip, float yearsOf_work, float years_company);

//Determining the main() function, with all the subprocess we're going to use
int main()
{

    // Defining the variables
    float year_work, salary;                           // The main variables
    float years_company, tip_p, extra_tip, new_salary; // Auxiliry variables
    
    years_company = 15;

    // The process, with do-while, it ends when the user enters a 0
    do
    {
        // Giving a value for the main variables
        printf("\nDigite 0 si desea terminar el programa.");
        printf("\nDigite la cantidad de años que ha laborado en la empresa: ");
        scanf("%f", &year_work);
        printf("\nDigite su sueldo para evaluar su caso: ");
        scanf("%f", &salary);

        //Block to call all the functions for work, and return variables to main
        tip_p = tip(year_work, years_company);
        extra_tip = extraTip(year_work, salary, tip_p, years_company);
        new_salary = theNewSalary(salary, extra_tip, year_work, years_company);
        
        reporte(new_salary, extra_tip, year_work, years_company);

    } while (year_work != 0 || salary != 0);

    return 0;
}

//This function call some values gived in the first part of main and calculate the tip in a percentage
float tip(float yearsOf_work, float years_company){

    float tip;

    if (yearsOf_work > 0 && yearsOf_work < 4)
    {
        tip = 0.1;

    }
    else if (yearsOf_work >= 4 && yearsOf_work < 7)
    {
        tip = 0.3;

    }
    else if (yearsOf_work >= 7 && yearsOf_work < 10)
    {
        tip = 0.5;
    }
    else if (yearsOf_work >= 10 && yearsOf_work <= years_company)
    {
        tip = 0.7;

    }

    return tip;
}

/* This is supposed to give us the extra tip, not in a percentage but in a number that can be
related with the salary */
float extraTip(float yearsOf_work, float salary, float tip_p, float years_company){
    
    float extra_tip;

    if (yearsOf_work > 0 && yearsOf_work < 4)
    {
        extra_tip = salary * tip_p;
    }
    else if (yearsOf_work >= 4 && yearsOf_work < 7)
    {
        extra_tip = salary * tip_p;
    }
    else if (yearsOf_work >= 7 && yearsOf_work < 10)
    {
        extra_tip = salary * tip_p;
    }
    else if (yearsOf_work >= 10 && yearsOf_work <= years_company)
    {
        extra_tip = salary * tip_p;
    }

    return extra_tip;
}

/* Knowing the extra tip anda the salary we can calculate the new salary of the user, so this function can do it
and after that the newSalary is returned to the main function */
float theNewSalary(float salary, float extraTip, float yearsOf_work, float years_company){
    float newSalary = 0;

    if (yearsOf_work > 0 && yearsOf_work < 4)
    {
        newSalary = salary + extraTip;
    }
    else if (yearsOf_work >= 4 && yearsOf_work < 7)
    {
        newSalary = salary + extraTip;
    }
    else if (yearsOf_work >= 7 && yearsOf_work < 10)
    {
        newSalary = salary + extraTip;
    }
    else if (yearsOf_work >= 10 && yearsOf_work <= years_company)
    {
        newSalary = salary + extraTip;
    }

    return newSalary;
}

/* Function reporte() is a function where all the variables and the process
now have a reason to be. The user now can see their new salary, and their 
extra tip*/
void reporte(float newSalary, float extraTip, float yearsOf_work, float years_company){

    if (yearsOf_work > 0 && yearsOf_work < 4)
    {
        printf("\nSu aumento salarial segun su servicio en la empresa es de: %.3f", extraTip);
        printf("\nAhora su salario es de: %.3f", newSalary);
    }
    else if (yearsOf_work >= 4 && yearsOf_work < 7)
    {
        printf("\nSu aumento salarial segun su servicio en la empresa es de: $%.3f", extraTip);
        printf("\nAhora su salario es de: $%.3f", newSalary);
    }
    else if (yearsOf_work >= 7 && yearsOf_work < 10)
    {
        printf("\nSu aumento salarial segun su servicio en la empresa es de: %.3f", extraTip);
        printf("\nAhora su salario es de: %.3f", newSalary);
    }
    else if (yearsOf_work >= 10 && yearsOf_work <= years_company)
    {
        printf("\nSu aumento salarial segun su servicio en la empresa es de: %.3f", extraTip);
        printf("\nAhora su salario es de: %.3f", newSalary);
    }
}