/* Programa 4:

Escriba un programa que tenga una funci�n distancia() que calcule la distancia entre dos puntos, 
dicha funci�n debe recibir dos par�metros tipo Punto: p1(x1, y1) y p2(x2, y2), y regresar el 
resultado como un valor flotante. La f�rmula para encontrar la distancia entre dos puntos es: 
distancia = raiz ( (x1 � x2) 2  + (y1 � y2) 2 ).   */

#include <stdio.h>
#include <math.h>

//FUNCIONES
float fdistancia(float x, float y, float a, float b);

//FUNCION PRINCIPAL
int main() {
	//definicion de las variables y darle valores a las variables que lo requiera.
	float x, y, a, b, distancia;

	printf("Ingrese el primer punto (x,y):");
	printf("\nEjemplo: x y ");
	scanf("%f %f", &x, &y);
	printf("Ingrese el segundo punto (x,y):");
	printf("\nEjemplo: a b ");
	scanf("%f %f", &a, &b);
	
	//Mandamos los valores de los puntos dados y el retorno se demuestra al usuario
	distancia = fdistancia(x, y, a, b);

	printf("La distancia del punto (%.3f, %.3f) a (%.3f, %.3f) es: %.3f",x,y,a,b,distancia);
	
	return 0;
}

//FUNCION DE DISTANCIA
float fdistancia(float x, float y, float a, float b){
	int distancia;

	/* Sumamos los cuadrados de la diferencia entre los valores de los puntos, y despues
	le sacamos la raiz cuadrada para poder conocer la distancia entre los dos puntos */
	distancia=pow((x-a),2)+pow((y-b),2);
	distancia=sqrt(distancia);
		
	//Retornamos el valor de distancia hacia main()...
	return(distancia);
}