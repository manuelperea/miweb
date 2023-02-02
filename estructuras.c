#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int paginas;
    char nombre[50];
    float precio;
}libro;


int main(){
    
    libro JT, HP;

    JT.paginas = 200;
    strcpy(JT.nombre, "Juego de Tronos");
    JT.precio = 15.75;

    HP.paginas = 150;
    strcpy(HP.nombre, "Harry Potter");
    HP.precio = 12.99;

    printf("El libro %s tiene %d paginas y cuesta %.2f euros.\n", JT.nombre, JT.paginas, JT.precio);

    printf("El libro %s tiene %d paginas y cuesta %.2f euros.\n", HP.nombre, HP.paginas, HP.precio);

    printf("El coste total de la compra asciende a: %.2f euros", JT.precio+HP.precio);


    return 0;
}