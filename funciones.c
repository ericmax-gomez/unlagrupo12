#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"



/*  -----> OTROS EJEMPLOS




//Implementacion o cuerpo de las funciones o procedimientos

int elegirTamanio(){

    int tam = 0;
    printf("Ingrese el tamaño que quiere\n");
    scanf("%d", &tam);


    return tam;
    }

void cargarVectorAleatorio(int v[], int tam){

    for ( int i = 0; i <tam; i++){
        //-70 a 100      171 =  MAX - (-70) +1
        v[i] = -70 + rand()%171;

    }

}


void mostrarVector(int v[], int tam){

    int i;
    printf("\n\n---------------\n\n");
    for (  i = 0; i <tam; i++){

        printf(" %d ", v[i]);

    }

}


int posMin(int v[], int tam){

    int pos = 0;
    int min = v[0];


    for ( int i = 0; i<tam; i++){

        if(v[i]<min){
            min = v[i]; //<_------
            pos = i;
        }
    }

    return pos;
}


int minVector(int v[], int tam){


    int min = v[  posMin(v,tam)  ];

    return min;
}


void sumaVectores(int v[], int w[], int resultado[], int tam){


    for ( int i = 0; i <tam; i++){

        resultado[i]= v[i]+w[i];
    }
}










//Implementaciones
void ordenamientoBurbuja(int v[], int tam){

    int aux;

    for ( int i = 0; i<tam; i++){

        for(int j =0; j<tam-1;j++){
            if(v[j]>v[j+1]){
                aux = v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }


        }
    }

}



void ordenamientoSeleccion(int v[], int tam){

    int min, tmp;
    for ( int i = 0; i<tam; i++ ){
        min = i;
        for(int j = i+1; j<tam; j++){

            if(v[min]>v[j]){
                min = j;
            }//cierra el id

        }//Cierra el for

        tmp = v[min];
        v[min]= v[i];
        v[i]= tmp;
    }//Cierra el for

}


void ordenamientoInsercion(int v[], int tam){

         int i, j, temp;
         for(i=0; i<tam; i++){
            temp=v[i];
            j=i-1;
            while(j>=0 && v[j] >temp){
                v[j+1] = v[j];
                j--;
            }

            v[j+1] = temp;
         }

}





int busquedaBinaria(int v[], int tam, int buscar){


        int sup = 0 ;
        int inf =0;
        int centro = 0;
        sup = tam -1;


        while(inf<=sup){

            centro = (sup + inf ) /2;
            if(v[centro]==buscar){
                return centro;
            } else
            { if(buscar<v[centro]){
                inf = centro +1;
            } else { sup = centro -1;
        }}}


    return -1;
}





int aleatorioEntre(int mini, int maxi){

        //mini = 8, maxi = 20

        int resultado = 0;


        resultado  =  mini + rand()%(maxi - mini +1);


        return resultado;

}



void cargarVectorConAleatorios(int v[], int tam, int mini,int maxi){


    for ( int i = 0; i<tam; i++){

        v[i]= aleatorioEntre(mini, maxi);
    }



}







*/






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

}


void llenarCarton (int car[COLUMNA][RENGLON]){

        int op=tipoDeCarton();

        if(op==1){

            rellenarAleatorio(car);
        }

        else{

            rellenarPersonalizado(car);
       }

}
