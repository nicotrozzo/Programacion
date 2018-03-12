/*
GRUPO 4 
TP1EJ9 
*/

#include <stdio.h>


int main (void) {

	double	origen = -13.78798790;		
	printf ("Numero: %f\n",origen);				

	int intredondeado = (int) (origen>=0 ? origen +.5:origen-.5);	//definimos la variable para que sirva para numeros negativos
	printf ("Numero redondeado: %d\n",intredondeado);		//en el caso de numeros con parte decimal .5 se redondea al numero de 										//mayor modulo (entero superior en los positivos e inferior en los 										//negativos)

	int superior = (int) (origen >=0 ? origen + 1: origen);
	printf ("Entero superior: %d\n", superior);

	int inferior = (int) (origen >= 0 ? origen : origen-1);
	printf ("Entero inferior: %d\n", inferior);

	double decimal = origen - (int)origen;				//en los negativos tomamos la parte decimal como negativa
	printf ("Parte decimal: %f\n", decimal);

	double dosdecimales = ((int)(origen*100))/100.0;
	printf ("Redondeo con 2 decimales: %.2f\n",dosdecimales);


	return 0;
}
