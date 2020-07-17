#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"
//#include "funcionesMatrices.h"



int main()

{

    //nombres y apellidos ---- GRUPO 12 ----

    srand(time(0));
    
    Int tamanio=10;
    char nombre[tamanio], apellido [tamanio];

    int dni, cant, carton1[COLUMNA][RENGLON],carton2[COLUMNA][RENGLON],carton3[COLUMNA][RENGLON];
    int maquina1[COLUMNA][RENGLON],maquina2[COLUMNA][RENGLON],maquina3[COLUMNA][RENGLON];


    cargarjugadores(nombre,apellido,dni);

    cant=cantidadCartones();

    llenarCarton (carton1,carton2,carton3,maquina1,maquina2,maquina3,cant);

    mostrarCartones(carton1,carton2,carton3,maquina1,maquina2,maquina3,cant);

    return 0;

}
