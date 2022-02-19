#include <stdio.h>

int main(){
    int x, num, contador;

    for (num = 1; num <= 100; num++)
    {
        x = 1;
        contador = 0;
        while (x <= num)
        {
            if (num % x == 0)
            {
                contador += 1;
            }
            x += 1;
        }

        if (contador == 2)
        {
            printf("\nEl numero %d, es primo.", num);
        }
    }
}