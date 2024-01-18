#define MAX_PRODUCTOS 100
#define MAX_NOMBRE 50

void leerProducto(char nombre[MAX_PRODUCTOS][MAX_NOMBRE], float precio[MAX_PRODUCTOS], int stock[MAX_PRODUCTOS], int *numProductos);
void mostrarProducto();
void mostrarMenu();
void mandarProducto(char nombre[MAX_NOMBRE][MAX_PRODUCTOS], float precio[MAX_PRODUCTOS], int stock[MAX_PRODUCTOS], int numeroProducto);
void editarProducto(char nombre[MAX_PRODUCTOS][MAX_NOMBRE], float precios[MAX_PRODUCTOS], int cantidades[MAX_PRODUCTOS], int numProductos) ;
void eliminarProducto(char nombres[MAX_PRODUCTOS][MAX_NOMBRE], float precios[MAX_PRODUCTOS], int cantidades[MAX_PRODUCTOS], int *numProductos);