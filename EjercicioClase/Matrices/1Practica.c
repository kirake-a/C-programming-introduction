/* Se requiere controlar el numero de habitantes de un edificio con 6 pisos y 4 puertas en
cada piso. Realizar un programa que pida al usuario que introduzca el numero de habitantes de
cada puerta del edificio. El programa debe decir la vivienda (piso y puerta) que mas habitantes
tiene del edificio */
#include <stdio.h>
#define filas 6
#define columnas 4

// Primera funcionalidad, encuentra que puerta de todas tiene la mayor cantidad de personas en ella
int comparador(int edificio[filas][columnas]);
void print_comparador(int mayor, int valor_j, int piso);

// segunda funcionalidad, calcula el piso del edificio con mas habitantes
int comparador_pisos(int edificio[filas][columnas]);
int print_mayor_pisos(int mayor, int piso);

//Calculando la media de habitantes de cada piso
int cantidad_total_habitantes(int edificio[filas][columnas]);
float media_habitantes_piso(float suma0, float suma1, float suma2, float suma3, float suma4, float suma5, float total_habitantes);
void print_media_habitantes(float media0, float media1, float media2, float media3, float media4, float media5);

int main(){

    int edificio[filas][columnas];
    int i, j;
    int mayor;

    for (i = 0; i < filas; i++){
        for (j = 0; j < columnas; j++){
            char puerta;

           if(j == 0){
               puerta = 'A';
           }
           else if(j == 1){
               puerta = 'B';
           }
           else if( j == 2){
               puerta = 'C';
           }
           else{
               puerta = 'D';
           }

            printf("Cantidad de personas en el piso %d, puerta %c: ", i + 1, puerta);
            scanf("%d", &edificio[i][j]);
        }
    }

    comparador(edificio);
    comparador_pisos(edificio);

    return 0;
}

int comparador(int edificio[filas][columnas]){
    int mayor, valor_j, piso;

    mayor = edificio[0][0];
    valor_j = 0;
    piso = 0;

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            
            if(edificio[i][j] > mayor){
                mayor = edificio[i][j];
                valor_j = j;
                piso = i;
            }
        }
    }

    print_comparador(mayor, valor_j, piso);

    return mayor;
}

void print_comparador(int mayor, int valor_j, int piso){
    char puerta;

    if (valor_j == 0){
        puerta = 'A';
    }
    else if (valor_j == 1){
        puerta = 'B';
    }
    else if (valor_j == 2){
        puerta = 'C';
    }
    else{
        puerta = 'D';
    }

    printf("\n\nEn el piso %d, puerta %c, se encuentra la vivienda con mas habitantes del edificio: %d personas.", piso + 1, puerta, mayor);
}

int comparador_pisos(int edificio[filas][columnas]){
    int suma0 = 0, suma1 = 0, suma2 = 0, suma3 = 0, suma4 = 0, suma5 = 0;
    int mayor, piso;
    int total_habitantes;

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){

            if( i == 0){
                suma0 = suma0 + edificio[0][j];
            }
            else if(i == 1){
                suma1 = suma1 + edificio[1][j];
            }
            else if(i == 2){
                suma2 = suma2 + edificio[2][j];
            }
            else if(i == 3){
                suma3 = suma3 + edificio[3][j];
            }
            else if(i == 4){
                suma4 = suma4 + edificio[4][j];
            }
            else if(i == 5){
                suma5 = suma5 + edificio[5][j];
            }

        }
    }

    mayor = suma0;
    piso = 0;

    if(mayor < suma1){
        mayor = suma1;
        piso = 1;
    }
    if(mayor < suma2){
        mayor = suma2;
        piso = 2;
    }
    if(mayor < suma3){
        mayor = suma3;
        piso = 3;
    }
    if(mayor < suma4){
        mayor = suma4;
        piso = 4;
    }
    if(mayor < suma5){
        mayor = suma5;
        piso = 5;
    }

    // mayor, piso...

    print_mayor_pisos(mayor, piso);
    total_habitantes = cantidad_total_habitantes(edificio);
    media_habitantes_piso(suma0, suma1, suma2, suma3, suma4, suma5, total_habitantes);
}

int print_mayor_pisos(int mayor, int piso){
    printf("\n\nEl piso %d tiene la mayor cantidad de habitantes en el edificio: %d personas\n", piso + 1, mayor);
}

int cantidad_total_habitantes(int edificio[filas][columnas]){
    int i, j;
    int sumatoria = 0;

    for (i = 0; i < filas; i++){
        for (j = 0; j < columnas; j++){

            sumatoria = sumatoria + edificio[i][j];
        }
    }

    return sumatoria;
}

float media_habitantes_piso(float suma0, float suma1, float suma2, float suma3, float suma4, float suma5, float total_habitantes){
    float media0, media1, media2, media3, media4, media5;

    media0 = suma0 / total_habitantes;
    media1 = suma1 / total_habitantes;
    media2 = suma2 / total_habitantes;
    media3 = suma3 / total_habitantes;
    media4 = suma4 / total_habitantes;
    media5 = suma5 / total_habitantes;

    print_media_habitantes(media0, media1, media2, media3, media4, media5);
}

void print_media_habitantes(float media0, float media1, float media2, float media3, float media4, float media5){

    printf("\nLa media de habitantes en el piso %d es: %.3f", 1, media0);
    printf("\nLa media de habitantes en el piso %d es: %.3f", 2, media1);
    printf("\nLa media de habitantes en el piso %d es: %.3f", 3, media2);
    printf("\nLa media de habitantes en el piso %d es: %.3f", 4, media3);
    printf("\nLa media de habitantes en el piso %d es: %.3f", 5, media4);
    printf("\nLa media de habitantes en el piso %d es: %.3f", 6, media5);
}