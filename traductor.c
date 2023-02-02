#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 50

// Aqui abajo pondremos las funciones.

void anadir();
void vacio();

typedef struct{
    char eng[N];
    char esp[N];
    int lleno;
}traductor;

traductor trad[N];

int main(){
    
    int op;
    char key;

    vacio();

    do{
        do{
            printf("Elige que deseas hacer:\n");
            printf("(1) Anadir palabra al traductor.\n");
            printf("(2) Buscar traduccion de una palabra.\n");
        }while(op < 1 || op > 2);

        switch(op){
            case 1:
                anadir();
                break;
            case 2:
                //traducir();
                break;
        }

        printf("Introduce si deseas realizar otra operacion: (S/N) ");
        scanf("%c",&key);

    }while(key == 'S' || key == 's');


    return 0;
}

void vacio(){
    int i;

    for(i = 0 ; i < N; i++){
        trad[i].lleno = 0;
    }
}

void anadir(){
    int i, aux = 0;

    for(i = 0 ; i < N && aux == 0; i++){
        if(trad[i].lleno == 0){
            printf("Introduce la palabra en Ingles: ");
            fflush(stdin);
            fgets(trad[i].eng, N, stdin);
            //funcion
            printf("Introduce la palabra en Espanol: ");
            fflush(stdin);
            fgets(trad[i].esp, N, stdin);
            //funcion

            trad[i].lleno = 1;

            aux = 1;
        }
    }
}



