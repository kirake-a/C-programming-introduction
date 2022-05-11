// Programa 1, sobre el hospital y los pacientes de forma semanal... Ruben Alvarado
#include <stdio.h>
#define TAM 3

/* Declaracion del arreglo de estructuras con los datos de los pacientes de un hospital */
typedef struct {
    char nombre[20];
    char direccion[20];
    int edad;
    char sexo[10];
    int visita;
    char problema_med[60];
} hospital;

// Se lleva a una funcion el arreglo de estructuras
void leerEstructura(hospital *pt);

int main(){

    // Se manda el arreglo de estructuras a una funcion
    static hospital paciente[TAM];

    leerEstructura(paciente);

    return 0;
}

void leerEstructura(hospital *paciente){
    // Declaracion de variables auxiliares
    int i, dia;

    // Ciclo para conocer los datos de los pacientes declarados en el arreglo de estructuras
    for (i = 0; i < TAM; i++)
    {
        printf("\n\n");

        fflush(stdin);

        printf("Nombre del paciente %d: ", i + 1);
        gets(paciente[i].nombre);

        printf("La direccion del paciente %d: ", i + 1);
        gets(paciente[i].direccion);

        fflush(stdin);

        printf("La edad del paciente %d: ", i + 1);
        scanf("%d", &paciente[i].edad);

        fflush(stdin);

        printf("El sexo del paciente %d: ", i + 1);
        gets(paciente[i].sexo);

        fflush(stdin);

        printf("Dia de visita del paciente %d: ", i + 1);
        scanf("%d", &paciente[i].visita);

        fflush(stdin);

        printf("Problema medico del paciente %d: ", i + 1);
        gets(paciente[i].problema_med);
    }

    // El dia de visita de los pacientes que se desean conocer
    printf("\n\nDigite un valor entre 1-7, para conocer a los pacientes con visita del dia: ");
    scanf("%d", &dia);

    // Por si se digita un dia de la semana que no corresponde entonces se vuelve a pedir esa informacion
    while (dia < 1 && dia > 7)
    {
        printf("Error, este dia no existe en la semana...");
        printf("Vuelva a digitar el dia que desea conocer: ");
        scanf("%d", &dia);
    }

    // Printear a los pacientes que les toca visita en el dia, segun se pida
    printf("\nHoy le toca visita a: ");
    for (i = 0; i < TAM; i++)
    {
        if (paciente[i].visita == dia)
        {
            printf("\n\t * %s", paciente[i].nombre);
            printf("\n\t\t Edad: %d", paciente[i].edad);
            printf("\n\t\t Sexo: %s", paciente[i].sexo);
            printf("\n\t\t Problema medico: %s", paciente[i].problema_med);
        }
    }
}