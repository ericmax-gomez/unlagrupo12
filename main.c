#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"
#include "procedimientos.h"

int main()
{
     srand ( time(0));

     int COLUMNA=5;
     int opcion=0;
     int cant=0;
     int bolilla[90];
     int contador=0;
     int carton1 [COLUMNA][RENGLON];
     int carton2 [COLUMNA][RENGLON];
     int carton3 [COLUMNA][RENGLON];
     int maquina1 [COLUMNA][RENGLON];
     int maquina2 [COLUMNA][RENGLON];
     int maquina3 [COLUMNA][RENGLON];

        cant = cantidadCartones();

        switch(cant){
            case 1:llenarCarton(carton1, maquina1, COLUMNA); break;
            case 2:llenarCarton(carton1, maquina1, COLUMNA);
                   llenarCarton(carton2, maquina2, COLUMNA); break;
            case 3:llenarCarton(carton1, maquina1, COLUMNA);
                   llenarCarton(carton2, maquina2, COLUMNA);
                   llenarCarton(carton3, maquina3, COLUMNA);break;
        }

        do{
                system("pause");
                system("cls");
            opcion=menuPrincipal();
            switch(opcion){
                case 1:switch(cant){
                        case 1:mostrarCartones(carton1, maquina1, COLUMNA);break;
                        case 2:mostrarCartones(carton1, maquina1, COLUMNA);
                               mostrarCartones(carton2, maquina2, COLUMNA);break;
                        case 3:mostrarCartones(carton1, maquina1, COLUMNA);
                               mostrarCartones(carton2, maquina2, COLUMNA);
                               mostrarCartones(carton3, maquina3, COLUMNA);break;
                        };break;
                case 2:mostrarBolillasSorteadas(bolilla, contador);break;
                case 3:break;
                case 4:bolillas(bolilla, contador);
                       contador= contador+1;break;
                case 5:printf("\n GRACIAS POR JUGAR \n");break;
                default:break;

            }
        }while(opcion!=5);

    return 0;
}


