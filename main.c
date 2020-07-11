#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"
//#include "funcionesMatrices.h"



int main()

{

    //nombres y apellidos ---- GRUPO 12 ----

    srand(time(0));

    char nombre[10], apellido [10];

    int dni, cant, carton1[COLUMNA][RENGLON],carton2[COLUMNA][RENGLON],carton3[COLUMNA][RENGLON];
    int ccarton1[COLUMNA][RENGLON],ccarton2[COLUMNA][RENGLON],ccarton3[COLUMNA][RENGLON];


    cargarjugadores(nombre,apellido,dni);

    cant=cantidadCartones();

    llenarCarton (carton1,carton2,carton3,ccarton1,ccarton2,ccarton3,cant);

    mostrarCartones(carton1,carton2,carton3,ccarton1,ccarton2,ccarton3,cant);

    return 0;

}
