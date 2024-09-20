# Projeto Algoritmos N1

Este projeto contém código em C para a resolução de algoritmos e manipulação de hexadecimal. Certifique-se de que seu ambiente de desenvolvimento esteja configurado corretamente para compilar e executar o código.

## Pré-requisitos

1.  **Compilador GCC**: Você precisará do GCC para compilar o código. Certifique-se de que ele está instalado no seu sistema.
    
    -   **macOS**:
        
        -   Instale o GCC com o Homebrew:
            
            `brew install gcc` 
            
        -   Para verificar a instalação:
              
            `gcc --version` 
            
    -   **Windows**:
        
        -   Instale o MinGW ou outro compilador C compatível.
        
2.  **Editor de Texto/IDE**:
    
    -   **VS Code**: Editor recomendado para o desenvolvimento deste projeto. Certifique-se de ter as extensões de C/C++ instaladas.

## Configuração do Ambiente (Windows)

Para rodar o código com a correta exibição de caracteres especiais no Windows, siga os passos abaixo:

1.  **Alterar a codificação do terminal**:
    
    -   Abra o Prompt de Comando (`cmd.exe`) ou o terminal integrado do VS Code.
    -   Execute o comando abaixo para alterar a codificação para **CP850**:
        
        `chcp 850` 
        
    -   Verifique a saída para garantir que o código de página foi alterado corretamente:
        
        `Página de código ativa: 850` 
        
2.  **Compilar o código**:
    
    -   No terminal, compile o código utilizando o GCC:
       
        `gcc main.c auxiliares.c -o main.exe` 
        
3.  **Executar o código**:
    
    -   Após a compilação, execute o arquivo `main.exe` no terminal com a codificação CP850:
        
        `.\main.exe` 
       
## Funcionalidade

Este projeto processa mensagens codificadas em hexadecimal, utilizando uma fórmula específica para decodificar as mensagens com base em uma chave cifra (variável `b`).
