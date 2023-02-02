#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 5

typedef struct{
    int paginas;
    char nombre[50];
    float precio;
}libro;

libro v[N];

int main(){
    
    int i;

    for (i=0; i<N; i++){

        printf("Introduce el titulo del libro %d: ", i+1);
        fflush(stdin);
        fgets(v[i].nombre, 50, stdin);

        printf("Introduce el numero de paginas: ");
        scanf("%d", &v[i].paginas);

        printf("Introduce el precio: ");
        scanf("%f",&v[i].precio);
        fflush(stdin);
    }

    for (i=0; i<N; i++){
        printf("Titulo del libro %d: %s\n", i+1, v[i].nombre);
        printf("Numero de paginas: %d.\n", v[i].paginas);
        printf("Precio: %.2f", v[i].precio);

    }


    return 0;
}