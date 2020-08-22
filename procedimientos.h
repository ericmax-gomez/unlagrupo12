#ifndef PROCEDIMIENTOS_H_INCLUDED
#define PROCEDIMIENTOS_H_INCLUDED

void rellenarAleatorio(int carto [][RENGLON], int col);
void rellenarPersonalizado(int carto [][RENGLON], int col);
void llenarTipo(int car [][RENGLON], int col);
void ordenamientoseleccionHorizontal(int car[][RENGLON], int col);
void ordenamientoseleccionVertical(int car[][RENGLON], int col);
void ordenamientoFinal(int car[][RENGLON], int col);
void llenarCarton(int car[][RENGLON], int maq[][RENGLON],int col);
void mostrarCarton(int cart [][RENGLON], int col);
void mostrarCartones(int car[][RENGLON], int maq[][RENGLON],int col);
void mostrarBolillasSorteadas(int bol[90], int contador);
void MostrarBolilla(int bol[90], int pos);
void bolillas(int bol[90], int contador);

#endif // PROCEDIMIENTOS_H_INCLUDED
