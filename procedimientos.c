#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"
#include "procedimientos.h"

void rellenarAleatorio(int carto [][RENGLON], int col){

    int resultadoBusqueda = 0 ;
    int nuevoNumero = 0 ;

    for( int i = 0 ; i <col; i ++) {

        for( int j = 0 ; j <RENGLON; j ++) {

            do{
                nuevoNumero = 1 + rand()%90 ;
                resultadoBusqueda = busquedaSecuencial (carto, nuevoNumero, col); // nos da la posición ---> -1

            } while (resultadoBusqueda != -1 );

            carto[i][j] = nuevoNumero;

        }
    }
}
void rellenarPersonalizado(int carto [][RENGLON], int col){

    int resultadoBusqueda = 0 ;
    int nuevoNumero = 0 ;

    for( int i = 0 ; i <col; i ++) {

        for( int j = 0 ; j <RENGLON; j ++) {

            do{
                do{
                    printf ( " ingrese numero: \n " );
                    scanf ("%d",&nuevoNumero);
                }while (nuevoNumero < 1 || nuevoNumero> 90 );

                resultadoBusqueda = busquedaSecuencial (carto, nuevoNumero, col); // nos da la posición ---> -1

                if (resultadoBusqueda != - 1 ) {
                    printf ( " no es posible repetir numero\n " );
                }

            } while (resultadoBusqueda != - 1 );

            carto[i][j] = nuevoNumero;

        }
    }
}
void  llenarTipo(int car [][RENGLON], int col){
        int op=0;

        do{
         op=tipoDeCarton();

      switch(op){
        case 1:rellenarAleatorio(car, col); break;
        case 2:rellenarPersonalizado(car, col); break;
        default:printf("\n la opcion ingresada es invalida \n"); break;
            }
        }while((op<1)||(op>2));
}
void ordenamientoseleccionHorizontal(int car[][RENGLON], int col){
    int min=0;
    int aux=0;
    for(int c=0; c<RENGLON; c++){
    for(int i=0; i<col; i++){
        min=i;
        for(int j=i+1; j<col; j++){
            if(car[min][c] >car[j][c]){
                min=j;
            }
        }
        aux=car[min][c];
        car[min][c]=car[i][c];
        car[i][c]=aux;
    }
    }
}
void ordenamientoseleccionVertical(int car[][RENGLON], int col){
    int min=0;
    int aux=0;
    for(int c=0; c<col; c++){
    for(int i=0; i<RENGLON; i++){
        min=i;
        for(int j=i+1; j<RENGLON; j++){
            if(car[c][min] >car[c][j]){
                min=j;
            }
        }
        aux=car[c][min];
        car[c][min]=car[c][i];
        car[c][i]=aux;
    }
    }
}
void ordenamientoFinal(int car[][RENGLON], int col){
    ordenamientoseleccionHorizontal(car, col);
    ordenamientoseleccionVertical(car, col);
}

void llenarCarton(int car[][RENGLON], int maq[][RENGLON],int col){

    llenarTipo(car, col);
    ordenamientoFinal(car, col);
    rellenarAleatorio(maq, col);
    ordenamientoFinal(maq, col);
}
void mostrarCarton(int cart [][RENGLON], int col){

    printf("-------------------------------------------\n\n");
    for( int i = 0 ; i <RENGLON; i ++) {

        for( int j = 0 ; j <col; j ++) {

               printf("   %.2d  ", cart[j][i]);
        }

        printf ("\n");
    }
    printf("-------------------------------------------");
    printf ("\n\n\n");

}
void mostrarCartones(int car[][RENGLON], int maq[][RENGLON],int col){
    printf("\n      carton jugador \n\n");
    mostrarCarton(car, col);
    printf("\n      carton maquina \n\n");
    mostrarCarton(maq, col);
}
void mostrarBolillasSorteadas(int bol[90], int contador){
    int i=0;
    for(i=0; i<contador; i++){
        printf(" %.2d - ", bol[i]);
    }
}
void MostrarBolilla(int bol[90], int pos){
    printf("salio el numero %.2d\n", bol[pos]);
}

void bolillas(int bol[90], int contador){

    int resultadoBusqueda = 0 ;
    int nuevoNumero = 0 ;


            do{
                nuevoNumero = 1 + rand()%90 ;
                resultadoBusqueda = busquedaSecuencialVector(bol, nuevoNumero, contador); // nos da la posición ---> -1

            } while (resultadoBusqueda != -1 );

            bol[contador] = nuevoNumero;
            MostrarBolilla(bol, contador);


}
