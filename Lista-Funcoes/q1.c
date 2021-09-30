#include <stdio.h>

/**
 * @brief Funcao que retorna o valor do fatorial de n
 * 
 * @param n um numero inteiro positivo
 * @return o fatorial de n
 */
unsigned long int fat(unsigned int n);

int main(){

    unsigned int n;
    unsigned long int res;

    scanf("%u", &n);

    res = fat(n);

    printf("%u! = %lu\n", n, res);

    return 0;
}

unsigned long int fat(unsigned int n){
    
    unsigned long int res = 1;

    for(n; n>1; n--) res*=n;

    return res;
}