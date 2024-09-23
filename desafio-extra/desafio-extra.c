#include <stdio.h>
#include <stdlib.h>

float verificador_nota(float valor){
	if (valor > 4.5 || valor < 0){
	   printf("Erro 3");
	   exit(EXIT_FAILURE);
	}
	return valor;
}

float verificador_secundario(float valor){
	if (valor < 0 || valor > 1) {
       printf("Erro 3");
       exit(EXIT_FAILURE);
	}
	return valor;
}

int main (void){
	
	float N1, N2, N3, nota_exam_unif, nota_PPD, menor_nota;
	int PPD, exam_unif;
	
	printf("Digite o valor da N1: ");
	scanf("%f", &N1);
	
	N1 = verificador_nota(N1);
	
	printf("Digite o valor da N2: ");
	scanf("%f", &N2);
	
	N2 = verificador_nota(N2);
	
	printf("\nHouve a realizacao do PPD?(0 - Nao, 1 - Sim): ");
	scanf("%i", &PPD);
	
	    if (PPD == 1){
	    	printf("Digite a nota do PPD: ");
	    	scanf("%f", &nota_PPD);
	
	    	nota_PPD = verificador_secundario(nota_PPD);
		}
	printf("\nHouve a relizacao do Exame Unificado?(0 - Nao, 1 - Sim): ");
	scanf("%i", &exam_unif);
	    
	    if (exam_unif == 1){
	    	printf("Digite a nota do Exame Unificado: ");
	    	scanf("%f", &nota_exam_unif);
	    	
	    	nota_exam_unif = verificador_secundario(nota_exam_unif);
		}
	if((N1 + N2 + nota_PPD + nota_exam_unif) >= 7){
		
		//caso exceda 10 pontos que � o m�ximo
		
		if ((N1 + N2 + nota_PPD + nota_exam_unif) > 10){
	        printf("\nnota final : 10\n");
	        printf("O valor final nao pode exceder 10 pontos!");
	        
	        exit(EXIT_SUCCESS);
	    }
	        
		printf("\n%.1f(Aluno aprovado!)", (N1 + N2 + nota_PPD + nota_exam_unif));
		
		exit(EXIT_SUCCESS);
	}
	else {
	    printf("\nA nota foi insuficiente para a aprovacao, sera necessaria a nota da N3!\n");
	    printf("\nDigite o valor da N3: ");
	    scanf("%f", &N3);
	
	    N3 = verificador_nota(N3);
	    
	    //Para achar a menor nota!
	    
	    if (N1 < N2)
            menor_nota = N1;
        else 
            menor_nota = N2;
            
        //Para substituir a menor nota!
        
        if (menor_nota == N1){
            N1 = N3;
            printf("\nO valor de N3 ira substituir o valor de N1, por ser o menor valor!\n");
        }
        else {
            N2 = N3;
	        printf("\nO valor de N3 ira substituir o valor de N2, por ser o menor valor!\n");
        }
		 
        //Caso o valor exceda 10 pontos;
        
        if ((N1 + N2 + nota_PPD + nota_exam_unif) > 10){
	        printf("\nnota final : 10\n");
	        printf("O valor final nao pode exceder 10 pontos!");
	        
	        return 0;
	    }
    
	    if((N1 + N2 + nota_PPD + nota_exam_unif) >= 7)
	        printf("\nnota final: %.1f(aprovado)",(N1 + N2 + nota_PPD + nota_exam_unif));
	    
	    else
	        printf("\nnota final: %.1f(reprovado)", (N1 + N2 + nota_PPD + nota_exam_unif));
    }
    
	exit(EXIT_SUCCESS);
}