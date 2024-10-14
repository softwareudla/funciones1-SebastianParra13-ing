#include "funciones.h"
#include <stdio.h>
#include <string.h>

#define PRODUCTOS 2
#define NOMBRES 50

void pedirdatos(char productos[PRODUCTOS][NOMBRES], float precios[PRODUCTOS])
{

    for (int i = 0; i < PRODUCTOS; i++)
    {
        printf("\n");
        printf("<<<<<<<<<<<<<<<<----------------------------------------------------------->>>>>>>>>>>>>>>>>>>\n");
        printf("Ingresa el nombre del producto (%d)\n", i + 1);
        fflush(stdin);
        gets(productos[i]);
        printf("\n");
        printf("\n");
        printf("-----------------------------------------------------------\n");
        printf("\n");
        printf("\n");
        printf("Ingresa el precio del producto <<%s>>", productos[i]);
        scanf("%f", &precios[i]);
        /*Esta opcion permite que despues del ingreso del nombre, pueda seguir el ingreso del producto sin errores*/
    }
}

float calcular_precio_total(float precios[], int tamano)
{

    float precio_total = 0.0;
    for (int i = 0; i < tamano; i++)
    {
        precio_total += precios[i];
    }

    return precio_total;
}

int mas_caro(float precios[], char productos[], float maximo)
{
    int indice_producto_alto = 0;
    for (int i = 0; i < PRODUCTOS; i++)
    {
        if (precios[i] > precios[indice_producto_alto])
        {
            indice_producto_alto = i;
        }
    }

    return indice_producto_alto;
}

int mas_barato(float precios[], char productos[], float minimo)
{
    int indice_producto_bajo = 0;
    for (int i = 0; i < PRODUCTOS; i++)
    {
        if (precios[i] < precios[indice_producto_bajo])
        {
            indice_producto_bajo = i;
        }
    }

    return indice_producto_bajo;
}

float precio_promedio(float precios[], char productos[])
{

    float PromT = 0;

    for (int i = 0; i < PRODUCTOS; i++)
    {
        PromT += precios[i];
    }

    PromT = PromT / PRODUCTOS;

    return PromT;
}

void buscarproducto(char productos[PRODUCTOS][NOMBRES], float precios[PRODUCTOS])
{
    char buscar[50]; // variable para almacenar el nombre a buscar

    printf("Ingrese el nombre del producto que deseas buscar: ");
    fflush(stdin);
    gets(buscar);
    // Buscar nombre en el arreglo
    int encontrado = 0;
    for (int i = 0; i < PRODUCTOS; i++)
    {
        if (strcmp(productos[i], buscar) == 0)
        {
            printf("El producto es: '%s' y su precio es %.2f", buscar, precios[i]);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("El producto no se encontro.\n");
    }
}