#include <stdio.h>
#include <limits.h>

int main() {
   
    int valor_maximo_int = INT_MAX;
    printf("Valor màximo para 'int': %d\n", valor_maximo_int);
    
    valor_maximo_int = valor_maximo_int + 1;
    printf("Valor após ultrapassar o limite de 'int': %d\n", valor_maximo_int);

    return 0;
}

