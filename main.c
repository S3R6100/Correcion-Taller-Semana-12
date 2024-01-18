#include <stdio.h>
#include "funciones.h"

#define MAX_PRODUCTOS 100
#define MAX_NOMBRE 50

int main() {
int opcion = 0;
char nombres[MAX_PRODUCTOS][MAX_NOMBRE];
float precios[MAX_PRODUCTOS];
int stock[MAX_PRODUCTOS];
int numProductos = 0;


  do {
      mostrarMenu();
      printf("Seleccione una opción: ");
      scanf("%d", &opcion);

      switch (opcion) {

          case 1:
              leerProducto(nombres, precios, stock, &numProductos);
              mandarProducto(nombres, precios, stock, numProductos);             
              break;

          case 2:
              mostrarProducto();
              break;

          case 3:
              editarProducto(nombres, precios, stock, numProductos);
              break;

          case 4:
              eliminarProducto(nombres, precios, stock, numProductos);
              break;

          case 5:
              printf("Saliendo del programa.\n");
              break;

          default:
              printf("Opción no válida\n");
      }

  } while (opcion != 5);
  return 0;
}