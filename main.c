#include <stdio.h>
#include "funciones.h"
#include <string.h>
int main (int argc, char *argv[]) {

    struct Libro libros[20];
    int opc;
    int i=0;
    do{
        printf("\n----------MENU---------");
        printf("\n1. Ingresar Libros. ");
        printf("\n2. Mostrar Libros. ");
        printf("\n3. Buscar Libro por Id. ");
        printf("\n4. Buscar libro por Titulo.");
        printf("\n5. Actualizar Estado de un Libro. ");
        printf("\n6. Eliminar Libro. ");
        printf("\n7. Salir. ");
        printf("\n Digite que Opcion desea: ");scanf("%i", opc);
    switch (opc)
    {
        case 1:
            registrarLibro(libros, i);
            i++;
            break;
        case 2:
            mostrarLibros(libros, i);
            break;
        case 3:
            buscarLibroId(libros);
            break;
        case 4:
            buscarLibroTitulo(libros);
            break;
        case 5:
            ActualizarLibro(libros);
            break;
        case 6:
            EliminarLibro(libros); 
        break;
        case 7:
            printf("\nSaliendo....");
        break;
        
        default:
        printf("\nEsa Opcion no Existe N/A");
        break;

    }
    }while(opc != 7);


    return 0;
}