/*Tres personas invierten dinero para fundar una empresa (no necesariamente en
partes iguales). Se pide desarrollar un algoritmo que calcule que porcentaje
invirtió cada una.*/
#include<stdio.h>

int main(void)
{
  float persona1, persona2, persona3, total1;
  float porcentaje1, porcentaje2, porcentaje3, total2;
  printf("\t\t\tEjercicio 3\n");
  printf("\n¿cuanto invirtio la primera persona ? :");
  scanf("%f",&persona1);
  printf("\n¿cuanto invirtio la segunda persona ? :");
  scanf("%f",&persona2);
  printf("\n¿cuanto invirtio la tercera persona ? :");
  scanf("%f",&persona3);
  total1 = persona1 + persona2 + persona3;
  total2 = 100/(persona1 + persona2 + persona3) ;
  porcentaje1 = total2 * persona1;
  porcentaje2 = total2 * persona2;
  porcentaje3 = total2 * persona3;
  printf("\n\nLa primera persona invirtio un %.2f%% de %.f",porcentaje1,total1);
  printf("\n\nLa segunda persona invirtio un %.2f%% de %.f",porcentaje2,total1);
  printf("\n\nLa tercera persona invirtio un %.2f%% de %.f",porcentaje3,total1);
  return 0;
}

