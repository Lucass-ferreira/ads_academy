#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//função com retorno de valor tipo booleano
bool verificaPar(int numero){
    if (numero % 2 == 0){
        return true; //retorna true, indica que o valor é par
    } else {
        return false; //retorna false, indica que o valor é impar
    }
}

int main(void){
    for (int numero= 1; numero <= 10; numero++){
        printf("\n *--------------------------------------*");

        if (verificaPar(numero)){
            printf("\n OK Era esperado PAR");
        } else{
            printf("\n Nao retornou par");
            continue; //Para números ímpares, o programa volta para a linha 15 e não excuta a linha 25
        }

        printf("\n produto numero par %d x 2 eh: %d", numero, numero * 2);
    } //fim do for

    return 0;
}