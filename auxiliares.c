#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double calculaFX(int x, int b) {
    
    double retorno;
    
    double a0 = 186.752;
    double a1 = -148.235;
    double a2 = 34.5049;
    double a3 = -3.5091;
    double a4 = 0.183166;
    double a5 = -0.00513554;
    double a6 = 0.0000735464;
    double a7 = -4.22038 * 0.0000001;

    retorno =  (a0 + (a1 + b)* x) + (a2 * pow(x, 2) + a3 * pow(x, 3)) + (a4 * pow(x, 4) + a5 * pow(x, 5)) + (a6 * pow(x, 6) + a7 * pow(x, 7));
    
    return round(retorno);
}

int tabelaHexadecimal(char valor) {
    
    int retorno = 0;
    
    switch (valor) {
        case '0':
            retorno = 0;
        break;
        case '1':
            retorno = 1;
        break;
        case '2':
            retorno = 2;
        break;
        case '3':
            retorno = 3;
        break;
        case '4':
            retorno = 4;
        break;
        case '5':
            retorno = 5;
        break;
        case '6':
            retorno = 6;
        break;
        case '7':
            retorno = 7;
        break;
        case '8':
            retorno = 8;
        break;
        case '9':
            retorno = 9;
        break;
        case 'A':
        case 'a':
            retorno = 10;
        break;
        case 'B':
        case 'b':
            retorno = 11;
        break;
        case 'C':
        case 'c':
            retorno = 12;
        break;
        case 'D':
        case 'd':
            retorno = 13;
        break;
        case 'E':
        case 'e':
            retorno = 14;
        break;
        case 'F':
        case 'f':
            retorno = 15;
        break;
      
    }
    
    return retorno;
    
}
 

int converteHexParaInt(char c1, char c2) {
    
    int valor1, valor2, retorno = 0;
    
    valor2 = tabelaHexadecimal(c2);
    valor2 = valor2 * 1;
    
    valor1 = tabelaHexadecimal(c1);
    valor1 = valor1 * 16;
    
    
    retorno = valor2 + valor1;
    
    return retorno;

}

int processaMensagem(int posicaoMensagem) { 

    int fimDaMensagem, chaveCifra, i;
    char mensagemCodificada[101];

    fimDaMensagem = 0;

    printf("\nQual é a chave cifra? (Variável B) da mensagem %d: ", posicaoMensagem);
    scanf("%d", &chaveCifra);
        
    if(chaveCifra > 100 || chaveCifra < -100) {
        printf("Chave cifra inválida.");
        exit(EXIT_FAILURE);
    }
        
    printf("\nInsira a mensagem codificada (HEX): ");
    scanf("%s", mensagemCodificada);
    printf("\n");


    for(i = 0; i < 100; i+=2) {
        
        int posicaoCaractere = i/2 +1;
        int caractereConvertido = converteHexParaInt(mensagemCodificada[i], mensagemCodificada[i + 1]);
        
        if(caractereConvertido == 0) {
            fimDaMensagem = 1;
        }
            
        double FX = calculaFX(posicaoCaractere, chaveCifra);

        if(FX != 0 && fimDaMensagem == 0) {
            printf("%c", caractereConvertido);
        }
    }

    return 0;
}
