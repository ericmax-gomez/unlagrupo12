#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define RENGLON 3
#define COLUMNA 5

//PRE:
//POST: Se carga el jugador.
void cargarjugadores(char nombre[],char apellido[],int dni);

//PRE:
//POST: Se elige la cantidad de cartones a usar.
int cantidadCartones ();

//PRE:
//POST: se rellena el carton.
void llenarCarton (int car1[COLUMNA][RENGLON],int car2[COLUMNA][RENGLON],int car3[COLUMNA][RENGLON],int ccar1[COLUMNA][RENGLON],int ccar2[COLUMNA][RENGLON],int ccar3[COLUMNA][RENGLON],int c);

//PRE:
//POST: se rellena el carton.
void llenarTipo (int car[COLUMNA][RENGLON]);


//PRE:
//POST: se rellena el carton.
void rellenarAleatorio (int car[COLUMNA][RENGLON]);

//PRE:
//POST: se elige la entre llenar carton aleatorio o llenar carton personalizado.
int tipoDeCarton();


//PRE:
//POST: se elige la entre llenar carton aleatorio o llenar carton personalizado.
void  mostrarCarton(int cart[COLUMNA][RENGLON]);

//PRE:
//POST: se elige la entre llenar carton aleatorio o llenar carton personalizado
void  mostrarCartones(int cart1[COLUMNA][RENGLON],int cart2[COLUMNA][RENGLON],int cart3[COLUMNA][RENGLON],int ccar1[COLUMNA][RENGLON],int ccar2[COLUMNA][RENGLON],int ccar3[COLUMNA][RENGLON],int c);


//PRE: El tamaño debe ser mayor a cero
//POST: Se devuelve la posicion en caso que se encontro el numero, o -1 en caso de no encontrarlo
int busquedaSecuencial(int v[COLUMNA][RENGLON], int buscar);









#endif // FUNCIONES_H_INCLUDED
