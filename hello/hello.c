#include <stdio.h>
#include <string.h>

int main(void)
{
    char nombre[50]; // reserva espacio para 50 caracteres
    printf("¿Cuál es tu nombre? ");
    scanf("%49s", nombre); // lee hasta 49 caracteres, dejando espacio para '\0'
    printf("Hola, %s\n", nombre);
}
