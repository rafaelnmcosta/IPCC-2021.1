#include <stdio.h>

int main(){
    int numero, alg1, alg2, alg3, alg_controle;

    scanf("%d", &numero);

    alg1 = numero/100;
    alg2 = (numero - alg1*100)/10;
    alg3 = numero - alg1*100 - alg2*10;

    alg_controle = (alg1 + 3*alg2 + 5*alg3)%7;

    printf("O NOVO NUMERO E = %d%d", numero, alg_controle);
    
    return 0;
}