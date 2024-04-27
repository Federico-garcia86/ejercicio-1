#include<stdio.h>
/*Un negocio de venta de artículos para el hogar ofrece a sus clientes los siguientes
planes de pago:

Plan 1: 100% al contado. Se hace el 10% de descuento sobre el precio publicado.

Plan 2: 50% al contado y el resto en 2 cuotas iguales. El precio publicado se incrementa
en un 10%.

Plan 3: 25% al contado y el resto en 5 cuotas iguales. El precio publicado se incrementa
en un 15%.

Plan 4: Todo en 8 cuotas. El 60% se reparte en partes iguales en las primeras 4 cuotas y
el resto se reparte en partes iguales en las últimas 4 cuotas. El precio publicado se
incrementa en un 25%.

Se pide ingresar el precio de un artículo, la computadora muestra los valores a pagar
según cada plan. Utilizar el sentido común y las herramientas vistas para mostrar por
pantalla todas las opciones de forma adecuada.*/
int main(void)
{
    float precio, total;
    printf("\t\t\tEjercicio 2\a\n");
    printf("Ingresar el precio del producto:");
    scanf("%f",&precio);
    total=precio-(precio/10);
    printf("\n\aPlan 1: 100%% al contado. Se hace el 10%% de descuento : $%.2f\n ", total);
    total=precio+(precio/10);
    printf("\nPlan 2: 50%% al contado de $%.2f y el resto en 2 cuotas iguales de $%.2f ",total/2,total/4);
    printf("\nEl precio publicado se incrementa en un 10%% con un total de $%.2f\n",total);
    total=precio+(precio*0.15);
    printf("\nPlan 3: 25%% al contado de $%.2f y el resto en 5 cuotas iguales de $%.2f",total/4,(total-(total/4))/5);
    printf("\nEl precio publicado se incrementa en un 15%% con un total de $%.2f\n\n",total);
    total=precio+(precio/4);
    printf("Plan 4: Todo en 8 cuotas.");
    printf("El 60%% se reparte en partes iguales en las primeras 4 cuotas de $%.2f\n",(total*0.6)/4);
    printf("el resto se reparte en partes iguales en las ultimas 4 cuotas de $%.2f\n",(total*0.4)/4);
    printf("El precio publicado se incrementa en un 25%% con un total de $%.2f \n",total);
    return 0;
}
