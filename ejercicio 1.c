#include<stdio.h>

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
