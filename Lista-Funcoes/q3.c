#include <stdio.h>

/**
 * @brief Funcao que separa os digitos de um numero inteiro com tres digitos
 * 
 * @param n numero a ser separado
 * @param d1 primeiro numero a ser retornado
 * @param d2 segundo numero a ser retornado
 * @param d3 terceiro numero a ser retornado
 */
void separaDigitos(int n, int* d1, int* d2, int* d3);

int main(){

    int n, d1, d2, d3;

    scanf("%d", &n);

    separaDigitos(n, &d1, &d2, &d3);

    printf("%d%d%d\n", d3, d2, d1);

    return 0;
}

void separaDigitos(int n, int* d1, int* d2, int* d3){

    *d1 = n/100;
    *d2 = (n - *d1*100)/10;
    *d3 = (n - *d1*100 - *d2*10);

}