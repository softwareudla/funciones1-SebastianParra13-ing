#include <stdio.h>
#include "funciones.h"

#define PRODUCTOS 10
#define NOMBRES 50

/*Variables Globales*/
float precios[PRODUCTOS];
char productos[PRODUCTOS][NOMBRES];

int main(int argc, char *argv[])
{
    /*Declaracion de variables Locales*/
    float precio_total = 0, PromT = 0;
    int maximo = 0, minimo = 0, opc1 = 0, opc2 = 0;

    /*Ingresar productos y sus precios*/

    pedirdatos(productos, precios);

    /*Desarrollo del programa*/
    precio_total = calcular_precio_total(precios, PRODUCTOS);
    maximo = mas_caro(precios, productos[PRODUCTOS], 0);
    minimo = mas_barato(precios, productos[PRODUCTOS], 10);
    PromT = precio_promedio(precios, productos[PRODUCTOS]);

    
    printf("\n");
    printf("\n");

    /*Opciones*/
    do
    {
        printf("Seleccione una opcion\n");
        printf("1.Calcular Precio total y su promedio\n2.Procuto mas caro y mas barato\n3.Buscar un producto\n4.Salir\n");
        scanf("%d",&opc1);

        switch (opc1)
        {
        case 1:
            printf("\n");
            printf("\n");
            printf("El precio total es: %.2f\n", precio_total);
            printf("EL Promedio Total de los productos es: %.2f", PromT);
            printf("\n");
            printf("\n");
            break;
        case 2:
            printf("\n");
            printf("\n");
            printf("El producto mas caro es %sy su precio es: %.2f\n", productos[maximo], precios[maximo]);
            printf("El producto mas barato es %sy su precio es: %.2f\n", productos[minimo], precios[minimo]);
            printf("\n");
            printf("\n");
            break;
        case 3:
            printf("\n");
            printf("\n");
            buscarproducto(productos,precios);
            printf("\n");
            printf("\n");
            break;
        case 4:
            opc2 = 1;
            break;
        default:
            printf("\n");
            printf("\n");
            printf("No esta dentro de las opciones el numero ingresado, por favor ingrese otro");
            printf("\n");
            printf("\n");
            break;
        }
    } while (opc2 == 0);

    return 0;
}