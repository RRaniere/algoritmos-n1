#include <stdio.h>
#include <limits.h> 

int main() {
    printf("+---------------------------+-----------------------------+-----------------------------+\n");
    printf("| Tipo                      | Valor Minimo                | Valor Maximo                |\n");
    printf("+---------------------------+-----------------------------+-----------------------------+\n");
    printf("| char                      | %28d | %28d |\n", CHAR_MIN, CHAR_MAX);
    printf("| unsigned char             | %28d | %28u |\n", 0, UCHAR_MAX);
    printf("| short int                 | %28d | %28d |\n", SHRT_MIN, SHRT_MAX);
    printf("| unsigned short int        | %28d | %28u |\n", 0, USHRT_MAX);
    printf("| int                       | %28d | %28d |\n", INT_MIN, INT_MAX);
    printf("| unsigned int              | %28d | %28u |\n", 0, UINT_MAX);
    printf("| long int                  | %28ld | %28ld |\n", LONG_MIN, LONG_MAX);
    printf("| unsigned long int         | %28d | %28lu |\n", 0, ULONG_MAX);
    printf("| long long int             | %28lld | %28lld |\n", LLONG_MIN, LLONG_MAX);
    printf("| unsigned long long int    | %28d | %28llu |\n", 0, ULLONG_MAX);
    printf("+---------------------------+-----------------------------+-----------------------------+\n");

    return 0;
}

