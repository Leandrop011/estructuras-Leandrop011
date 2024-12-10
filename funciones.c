#include <stdio.h>
#include "funciones.h"
#include <string.h>

void registrarLibro(struct Libro libros[20], int i){
    printf("\n");
    fflush(stdin);
    printf("\n.:INGRESO DE LIBRO:.");
    printf("\nLibro %i. ", i + 1);
    printf("\nID(3 digitos): ");scanf("%i", &libros[i].idLibro);
    printf("\nTitulo: ");fgets(libros[i].titulo, 100, stdin);
    printf("\nAutor: ");fgets(libros[i].autor, 50, stdin);
    printf("\nAnio");scanf("%i", &libros[i].yearPublicacion);
    printf("\nEstado: ");fgets(libros[i].estado, 100, stdin);
    printf("\n");
}

void mostrarLibros(struct Libro libros[20], int c){
    printf("\n");
    printf("\n--------LIBROS---------");
    if (c !=0){
    printf("\nNOMBRE\t\tID\t\tAUTOR\t\tANIO\t\tESTADO\t\t\n");
    for (int i = 0; i < c; i++)
    {
        libros[i].titulo[strcspn(libros[i].titulo, "\n")] = '\0';
        libros[i].autor[strcspn(libros[i].autor, "\n")] = '\0';
        libros[i].estado[strcspn(libros[i].estado, "\n")] = '\0';
        printf("\n");
        printf("\n                          |%i|", i+1);
        printf("\n%s\t\t%i\t\t%s\t\t%i\t\t%s\n", libros[i].titulo,
                                                 libros[i].idLibro,
                                                 libros[i].autor,
                                                 libros[i].yearPublicacion, 
                                                 libros[i].estado);
        

        printf("\n");
    }

    }else
    {
        printf("\nNo existe ningun Libro Ingresado N/A");
    }
    
    


    printf("\n");
}
void buscarLibroId(struct Libro libros[20]){
    printf("\n");



    printf("\n");
}
void buscarLibroTitulo(struct Libro libros[20]){
    printf("\n");



    printf("\n");
}
void ActualizarLibro(struct Libro libros[20]){
    printf("\n");



    printf("\n");
}
void EliminarLibro(struct Libro libros[20]){
    printf("\n");



    printf("\n");
}
