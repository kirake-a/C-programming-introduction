/* Calcular el salario mensual de un trabajador de una empresa, si sabemos que se
calculan en base al número de horas semanales trabajadas y de acuerdo a un precio
especificado por hora. Si se pasan de cuarenta horas semanales, las horas extra se
pagaran a razón de 1.5 veces la hora ordinaria */
#include <stdio.h>

int main(){
    //The variables
    int week1_hours, week2_hours, week3_hours, week4_hours;
    float extra_tip1, extra_tip2, extra_tip3, extra_tip4;
    float pay_per_hour, pay_for_month, pay1, pay2, pay3, pay4;

    //Prompting the user for values for variables
    printf("Ingrese el pago que obtiene por hora de trabajo: ");
    scanf("%f", &pay_per_hour);
    printf("Indique el numero de horas trabajadas durante la primera semana del mes: ");
    scanf("%d", &week1_hours);
    printf("Indique el numero de horas trabajadas durante la segunda semana del mes: ");
    scanf("%d", &week2_hours);
    printf("Indique el numero de horas trabajadas durante la tercera semana del mes: ");
    scanf("%d", &week3_hours);
    printf("Indique el numero de horas trabajadas durante la cuarta semana del mes: ");
    scanf("%d", &week4_hours);

    //For week 1. Process to know how much people earn for their job
    if(week1_hours >= 0 && week1_hours <= 40){
        pay1 = week1_hours * pay_per_hour;
    }
    else if(week1_hours > 40){
        extra_tip1 = (week1_hours - 40) * (pay_per_hour + (pay_per_hour / 2));
        pay1 = pay_per_hour * 40;
        pay1 = pay1 + extra_tip1;
    }

    // For week 2. Process to know how much people earn for their job
    if (week2_hours >= 0 && week2_hours <= 40){
        pay2 = week2_hours * pay_per_hour;
    }
    else if (week2_hours > 40){
        extra_tip2 = (week2_hours - 40) * (pay_per_hour + (pay_per_hour / 2));
        pay2 = pay_per_hour * 40;
        pay2 = pay2 + extra_tip2;
    }

    // For week 3. Process to know how much people earn for their job
    if (week3_hours >= 0 && week3_hours <= 40){
        pay3 = week3_hours * pay_per_hour;
    }
    else if (week3_hours > 40){
        extra_tip3 = (week3_hours - 40) * (pay_per_hour + (pay_per_hour / 2));
        pay3 = pay_per_hour * 40;
        pay3 = pay3 + extra_tip3;
    }

    // For week 4. Process to know how much people earn for their job
    if (week4_hours >= 0 && week4_hours <= 40){
        pay4 = week4_hours * pay_per_hour;
    }
    else if (week4_hours > 40){
        extra_tip4 = (week4_hours - 40) * (pay_per_hour + (pay_per_hour / 2));
        pay4 = pay_per_hour * 40;
        pay4 = pay4 + extra_tip4;
    }

    //Sum to calculate the monthly payment
    pay_for_month = pay1 + pay2 + pay3 + pay4;

    //Output
    printf("El pago correspondiente a la semana 1 es de: $%.3f", pay1);
    printf("\nEl pago correspondiente a la semana 2 es de: $%.3f", pay2);
    printf("\nEl pago correspondiente a la semana 3 es de: $%.3f", pay3);
    printf("\nEl pago correspondiente a la semana 4 es de: $%.3f", pay4);
    printf("\nEl pago correspondiente al mes es de: $%.3f", pay_for_month);

    return 0;
}