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
    int dni, cant, carton[COLUMNA][RENGLON];


    cargarjugadores(nombre,apellido,dni);

    llenarCarton (carton);

    mostrarCarton(carton);

    return 0;
}










