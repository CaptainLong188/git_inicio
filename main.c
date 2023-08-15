#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(){

    int *ptr;
    int c = 10;

    ptr = &c;

    printf("Direccion del puntero %p", ptr);
    printf("El puntero apunta al entero %d", *ptr);

    return 0;
}