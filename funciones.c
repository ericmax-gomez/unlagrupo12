#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"
#include "procedimientos.h"

int  busquedaSecuencial(int m[][RENGLON], int buscar, int col){

    int pos = - 1 ;

    for( int j = 0 ; j <col; j ++) {

         for( int i = 0 ; i <RENGLON; i ++) {

            if (m [j] [i] == buscar) { // Lo encontre

                pos = i;

            }
        }
    }

       // Bien menos
       // if (pos == -1) {printf ("No lo encontre");}

    return pos;
}
int  cantidadCartones(){
    int cant = 0 ;
    do{
        printf ( " eliga con cuantos cartones va a jugar ... \n -> 1 \n -> 2 \n -> 3 \n  " );
        scanf("%d",&cant);


    } while (cant < 1 || cant> 3 );

    return cant;
}
int  tipoDeCarton(){

    int op;

    printf(" elegir opción:\n" );
    printf("1) comprar un cartón cualquiera (aleatorio)\n");
    printf("2) comprar un cartón personalizado (eligiendpo los numeros)\n");
    scanf ( "%d",&op);

    return op;

}
int menuPrincipal(){

    int op=0;

    printf("\n elige la opcion deseada: \n");
    printf(" 1 - mostrar cartones \n");
    printf(" 2 - mostrar bolillas sorteadas \n");
    printf(" 3 - mostrar puntaje \n");
    printf(" 4 - sacar proxima bolilla \n");
    printf(" 5 - abandonar juego \n");
    scanf("%d",&op);

    return op;
}
int  busquedaSecuencialVector( int m[90], int buscar, int contador){
    int pos = - 1 ;

    for( int j = 0 ; j <contador; j ++) {

            if (m[j] == buscar) { // Lo encontre

                pos = j;

        }
    }

       // Bien menos
       // if (pos == -1) {printf ("No lo encontre");}

    return pos;
}
