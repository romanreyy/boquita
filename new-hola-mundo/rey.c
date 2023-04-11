#include <stdio.h> 

float num1, num2, suma; 

main()

{
	printf ("Ingrese un numero");
	scanf ("%f", & num1);
	printf("Ingrese otro numero");
	scanf ("%f",num2);
	suma = num1+num2;
	printf ("La suma es %f", suma);
}

