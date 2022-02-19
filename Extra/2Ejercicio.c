#include <stdio.h>

int main(){
    //Variables
    float antiquity, percentage, bonus_extra, old_salary, new_salary;

    //Some questions to know better the employee
    printf("Indique el tiempo total que ha trabajado en la empresa: ");
    scanf(" %f", &antiquity);
    printf("Indique su salario actual: ");
    scanf(" %f", &old_salary);

    //if form
    if(antiquity >= 1 && antiquity < 3){
        percentage = 1;
    }
    else if(antiquity >= 3 && antiquity < 6){
        percentage = 3;
    }
    else if(antiquity >= 6 && antiquity < 9){
        percentage = 5;
    }
    else{
        if(antiquity >= 9){
            percentage = 7;
        }
    }

    //The process to know the new salary
    bonus_extra = (old_salary * percentage) / 100;
    new_salary = old_salary + bonus_extra;

    //Output
    printf("Su nuevo salario es: %.3f", new_salary);

    return 0;
}