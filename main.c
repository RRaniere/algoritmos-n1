#include <stdio.h>
#include <stdlib.h>
#include "auxiliares.h" 

int main(void) {
    
    int numeroMensagens, i;
    
    printf("Qual é o numero de mensagens interceptadas? ");
    scanf("%d", &numeroMensagens);

    if(numeroMensagens < 1 || numeroMensagens > 10000) {
        printf("Número de mensagens inválido.");
        exit(EXIT_FAILURE);
    }

    for(i = 1; i <= numeroMensagens; i++) {

       processaMensagem(i);
        
    }

    return 0;
}