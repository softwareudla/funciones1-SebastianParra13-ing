#define PRODUCTOS 10
#define NOMBRES 50

void pedirdatos(char productos[PRODUCTOS][NOMBRES], float precios[PRODUCTOS]);
float calcular_precio_total(float precios[], int tamano);
int mas_caro(float precios[], char productos[], float maximo);
int mas_barato(float precios[], char productos[], float minimo);
float precio_promedio(float precios[], char productos[]);
void buscarproducto(char productos[PRODUCTOS][NOMBRES], float precios[PRODUCTOS]);