#include <stdio.h>

int main(void){

    int contador = 0;

    printf("\nExemplo de estrutura de repeticao while");
    printf("\n*----------------------------------------*");

    while (contador < 10) {
        contador++;
        printf("\n O valor do contador eh = %d", contador);
    }

    return 0;
}