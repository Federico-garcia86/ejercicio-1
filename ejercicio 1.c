#include<stdio.h>
/*Desarrollar un algoritmo que introduzca la fecha con formato DDMMAAAA como un
entero de 8 dígitos y emita por pantalla su edad (aproximada). Ej. Se ingresa
12071973, mostrar: La persona tiene 50 años.*/

int main (void)
{
    int dia,mes,anio,edad;
    printf("\t\t\tEjercicio 1");
    printf("\n\nIngresar fecha de nacimiento con el formato DDMMAAAA ej:05081986:");
    scanf("%2d%2d%4d",&dia,&mes,&anio);
    edad=2024-anio;
    printf("\nTu edad aproximada es %d\n\n",edad);
    return 0;
}
