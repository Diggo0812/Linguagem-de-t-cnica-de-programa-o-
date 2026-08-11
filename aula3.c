#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// area do circulo
	float raio, area, raioQuadrado;
	
	printf("Insira o Valor de R: \n");
	scanf("%f", &raio);
	
	raioQuadrado = raio*raio;
	area = pi * raioQuadrado;
	
	printf("A Area do circulo de raio %f = %f" , raio, area);
	
	// area do trapézio descendente
	float B,b, h,areaT;
	printf ("Area do Trapezio de lado B: %f; b:%f h:%f = %f" , scanf("%f" ,&B) ,scanf("%f" ,&b), scanf("%f" ,&h), (((B+b)*h)/2) );
	
	return 0;
}
