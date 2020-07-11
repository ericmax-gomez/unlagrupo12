#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"



int busquedaSecuencial(int m[COLUMNA][RENGLON], int buscar){

    int pos = -1;

    for(int j=0;j<COLUMNA;j++){

        for ( int i = 0; i<RENGLON; i++){

            if ( m[j][i]==buscar){ //Lo encontre

                pos = i;

            }
        }
    }

       //Bien menos
       // if ( pos == -1){ printf("No lo encontre");}

    return pos;
}


void cargarjugadores(char nombre[],char apellido[],int dni){

    printf("ingrese nombre... \n");
    scanf("%s",nombre);
    printf("ingrese apellido... \n");
    scanf("%s",apellido);
    printf("ingrese dni... \n");
    scanf("%d",&dni);
}



int cantidadCartones (){
    int cant=0;
    do{
        printf("eliga con cuantos cartones va a jugar...\n --> 1\n --> 2\n --> 3\n ");
        scanf("%d",&cant);


    }while (cant<1 || cant>3);
    return cant;
}

int tipoDeCarton(){

    int op;

    printf("elegir opcion: \n 1) comprar un carton cualquiera (aleatorio) \n 2) comprar carton personalizado (eligiendpo los numeros)\n");
    scanf("%d",&op);

    return op;

}

void rellenarAleatorio (int carto[COLUMNA][RENGLON]){

    int resultadoBusqueda=0;
    int nuevoNumero=0;

    for ( int i =0; i<COLUMNA; i++){

        for ( int j= 0; j<RENGLON; j++ ){

            do{
                nuevoNumero = 1 +rand()%91;
                resultadoBusqueda = busquedaSecuencial(carto, nuevoNumero); //nos da la posicion ---> -1

            }while(resultadoBusqueda!=-1);

            carto[i][j]= nuevoNumero;

        }
    }
}


void rellenarPersonalizado (int carto[COLUMNA][RENGLON]){

    int resultadoBusqueda=0;
    int nuevoNumero=0;

    for ( int i =0; i<COLUMNA; i++){

        for ( int j= 0; j<RENGLON; j++ ){

            do{
                do{
                    printf("ingrese numero: \n");
                    scanf("%d",&nuevoNumero);
                }while(nuevoNumero<1 || nuevoNumero>90);

                resultadoBusqueda = busquedaSecuencial(carto, nuevoNumero); //nos da la posicion ---> -1

                if(resultadoBusqueda!=-1){
                    printf("no es posible repetir numero, ");
                }

            }while(resultadoBusqueda!=-1);

            carto[i][j]= nuevoNumero;

        }
    }
}



void  mostrarCarton(int cart[COLUMNA][RENGLON]){

    for ( int i =0; i<RENGLON; i++){

        for ( int j= 0; j<COLUMNA; j++ ){

               printf("%d    ", cart[j][i]) ;
        }

        printf("\n");
    }
    printf("\n\n\n");

}

void  mostrarCartones(int cart1[COLUMNA][RENGLON],int cart2[COLUMNA][RENGLON],int cart3[COLUMNA][RENGLON],int ccar1[COLUMNA][RENGLON],int ccar2[COLUMNA][RENGLON],int ccar3[COLUMNA][RENGLON],int c){

    //muestro el primer carton

    mostrarCarton(cart1);
    mostrarCarton(ccar1);

    if(c>1){ //muestro el segundo si existe

        mostrarCarton(cart2);
        mostrarCarton(ccar2);

    }

    if(c>2){//muestro el tercero si existe

        mostrarCarton(cart3);
        mostrarCarton(ccar3);

    }

}


void llenarTipo (int car[COLUMNA][RENGLON]){

        int op=tipoDeCarton();

        if(op==1){

            rellenarAleatorio(car);
        }

        else{

            rellenarPersonalizado(car);
       }

}



void llenarCarton (int car1[COLUMNA][RENGLON],int car2[COLUMNA][RENGLON],int car3[COLUMNA][RENGLON],int ccar1[COLUMNA][RENGLON],int ccar2[COLUMNA][RENGLON],int ccar3[COLUMNA][RENGLON],int c){

    //lleno el primer carton

    llenarTipo(car1);
    rellenarAleatorio(ccar1);

    if(c>1){ //lleno el segundo si existe

        llenarTipo(car2);
        rellenarAleatorio(ccar2);

    }

    if(c>2){//lleno el tercero si existe

        llenarTipo(car3);
        rellenarAleatorio(ccar3);

    }

}
